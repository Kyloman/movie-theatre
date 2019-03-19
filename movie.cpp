//
//  movie.cpp
//  assi_4
//
//  Created by Jonathan Acoltzi Rojas on 3/14/19.
//  Copyright © 2019 Jonathan Acoltzi Rojas. All rights reserved.
//

#include "movie.h"
using namespace std;

//Constructor
Movie::Movie()
{
    title = "";
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
string Movie::getDate()const
{
    return date;
}

//Had to guess what the vars were, you magic tricked movie.h out of repo
string Movie::toString()const
{
    return (this->getTitle() + " (" + this->getDate() + ")");
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
	
	for (int x = 0; x < title1.length(); x++) {
		if (title1[x] != title2[x])
        {
			return false;
		}
	}

	//Check dates
    string date1 = date;
	string date2 = other.getDate();

    if (date1.length() != date2.length())
    {
		return false;
	}

	for (int x = 0; x < date1.length(); x++)
    {
		if (date1[x] != date2[x])
        {
			return false;
		}
	}

	//If these are both the same, we assume they are the same!
	return true;

}
bool Movie::operator<(const Movie& other)
{
    return true;
    
}


