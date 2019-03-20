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

//Had to guess what the vars were, you magic tricked movie.h out of repo
string Movie::toString()const
{
    return (this->getTitle() + " (" + to_string(this->getYear()) + ")"); 
}

bool Movie::operator==(const Movie& other)
{
	//Check titles
    string title1 = this->getTitle();
	string title2 = other.getTitle();
    

    if (title1.length() != title2.length())
    {
		return false;
	}
	
	//Checking if the titles are the same
	for (int x = 0; x < title1.length(); x++) {
		if (title1[x] != title2[x])
        {
			return false;
		}
	}

	//Check dates
    int date1 = year;
	int date2 = other.getYear();

    if (date1 != date2)
    {
		return false;
	}

	//If these are both the same, we assume they are the same!
	return true;
}
bool Movie::operator<(const Movie& other)
{
    return true;
    
}


