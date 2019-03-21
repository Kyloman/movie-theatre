//
//  movie.cpp
//  assi_4
//
//  Created by Jonathan Acoltzi Rojas on 3/14/19.
//  Edited by Marko Lakic on 3/19/19
//  Copyright © 2019 Jonathan Acoltzi Rojas. All rights reserved.
//

#include "movie.h"
using namespace std;

//Constructor
Movie::Movie()
{
    title = "";
    director = "";
    year = 0;
}

//Deconstructor
Movie::~Movie()
{
    
}

//Setter
void Movie::setDirector(string name)
{
    director = name;
}
void Movie::setTitle(string name)
{
    title = name;
}
void Movie::setYear(int yearMovie)
{
    year = yearMovie;
}
void Movie::setComp1(string comp1)
{
    comparable1 = comp1;
}
void Movie::setComp2(string comp2)
{
    comparable2 = comp2;
}

//Getters
string Movie::getName()const
{
    return title;
}
string Movie::getDirector()const
{
    return director;
}
string Movie::getTitle()const
{
    return title;
}
int Movie::getYear()const
{
    return year;
}
string Movie::getComp1()const
{
    return comparable1;
}
string Movie::getComp2()const
{
    return comparable2;
}

//Had to guess what the vars were, you magic tricked movie.h out of repo
string Movie::toString()const
{
    return (this->getTitle() + " (" + to_string(this->getYear()) + ")"); 
}

bool Movie::operator==(const Movie& other)
{
    //Check comp1
    string comp1_1 = this->getComp1();
    string comp1_2= other.getComp1();
    
    if (comp1_1.length() != comp1_2.length())
        return false;
    
    //Checking if the comp1 is the same
    for (int x = 0; x < comp1_1.length(); x++) 
    {
        if (comp1_1[x] != comp1_2[x])
            return false;
    }

	//Check comp2
    string comp2_1 = getComp2();
	string comp2_2 = other.getComp2();

    if (comp2_1 != comp2_2)
        return false;

    //If these are both the same, we assume they are the same!
    return true;
}

bool Movie::operator<(const Movie& other)
{
	string comp1_1 = this->getComp1();
	string comp1_2 = other.getComp1();

	int chosenLength = comp1_1.length();

	//If comp 2 is smaller, we use that so no out of bounds error
	if (comp1_1.length() > comp1_2.length())
		chosenLength = comp1_2.length();

	//Check comp1
	for (int x = 0; x < chosenLength; x++) 
	{
		if (comp1_1[x] < comp1_2[x])
			return true;
		if (comp1_1[x] > comp1_2[x])
			return false;
	}

	//If one comp1 is longer than the other, that's larger
	if (comp1_1 < comp1_2) 
		return true;
	else if (comp1_1 > comp1_2)
		return false;

	//Check comp2
	string comp2_1 = getComp2();
	string comp2_2 = other.getComp2();

	if (comp2_1 < comp2_2)
		return true;
	if (comp2_1> comp2_2)
		return false;

	return false; //if they are equal then it is false
}

bool Movie::operator>(const Movie& other)
{
    return !(*this < other);
}

