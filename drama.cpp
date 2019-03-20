//
//  drama.cpp
//  assi_4
//
//  Created by Marko Lakic on 3/19/19.
//  Copyright � 2019 Marko Lakic. All rights reserved.
//

#include "drama.h"
// --------------------------constructor---------------------------------
// Description: creates a classic class
// ----------------------------------------------------------------------
Drama::Drama()
{
	title = "";
	director = "";
	date = 0;	
	setInv(0);
}

// --------------------------constructor---------------------------------
// Description: ovearloaded Constructor
// ----------------------------------------------------------------------
Drama::Drama(int newstock, string newdirector, string newtitle, int newdate)
{
    setTitle(newtitle);
    setDirector(newdirector);
    setYear(newdate);
    setInv(newstock);
}


// ------------------------deconstructor---------------------------------
// Description: destructor
// ----------------------------------------------------------------------
Drama::~Drama()
{

}

// --------------------------contructor---------------------------------
// Description: copy constuctor
// ----------------------------------------------------------------------
Drama::Drama(const Drama& copy)
{
	title = copy.getTitle();
	director = copy.getDirector();
	date = copy.getYear();
}

// --------------------------operator=---------------------------------
// Description: Overloads = opertaor for Drama Movies
// ----------------------------------------------------------------------
Drama& Drama::operator=(const Drama& rhs)
{
    setTitle(rhs.getTitle());
    setDirector(rhs.getDirector());
    setYear(rhs.getYear());
    setInv(rhs.getInv());
    return *this;
}

// --------------------------operator<---------------------------------
// Description: Overloads < opertaor for Drama Movies
// ----------------------------------------------------------------------
bool Drama::operator<(const Drama& other)const 
{
	//Check directors
	string director1 = this->getDirector();
	string director2 = other.getDirector();

	if (director1.length() != director2.length())
	{
		return false;
	}

	//Checking if the titles are the same
	for (int x = 0; x < director1.length(); x++) {
		if (director1[x] != director2[x])
		{
			return false;
		}
	}

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

	//If these are both the same, we assume they are the same!
	return true;
}

// --------------------------operator>---------------------------------
// Description: Overloads > opertaor for Drama Movies
// ----------------------------------------------------------------------
bool Drama::operator>(const Drama& other)const
{
	return !(*this < other);
}

// --------------------------operator==---------------------------------
// Description: Overloads == opertaor for Drama Movies
// ----------------------------------------------------------------------
bool Drama::operator==(const Drama& other)const
{
	//Check directors
	string director1 = this->getDirector();
	string director2 = other.getDirector();

	if (director1.length() != director2.length())
	{
		return false;
	}

	//Checking if the titles are the same
	for (int x = 0; x < director1.length(); x++) {
		if (director1[x] != director2[x])
		{
			return false;
		}
	}

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

	//If these are both the same, we assume they are the same!
	return true;
}
