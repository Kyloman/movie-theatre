//
//  comedy.cpp
//  assi_4
//
//  Created by Jonathan Acoltzi Rojas on 3/14/19.
//  Copyright © 2019 Jonathan Acoltzi Rojas. All rights reserved.
//

#include "comedy.h"
// --------------------------constructor---------------------------------
// Description: creates a comedy class
// ----------------------------------------------------------------------
Comedy::Comedy(int newstock, string newdirector, string newtitle, int newdate )
{
    setTitle(newtitle);
    setDirector(newdirector);
    setYear(newdate);
    setInv(newstock);
}
// ------------------------deconstructor---------------------------------
// Description: destructor
// ----------------------------------------------------------------------
Comedy::~Comedy()
{
    
}

// --------------------------contructor---------------------------------
// Description: copy constuctor
// ----------------------------------------------------------------------
Comedy::Comedy(const Comedy& rhs)
{
	setTitle(rhs.getTitle());
	setDirector(rhs.getDirector());
	setYear(rhs.getYear());
	setInv(rhs.getInv());
}

// --------------------------operator<---------------------------------
// Description: Overloads < opertaor for Comedy Movies
// ----------------------------------------------------------------------
bool Comedy::operator<(const Comedy& other)const
{
	string title1 = this->getTitle();
	string title2 = other.getTitle();
	int minLength = 0;
	if (title1.length() < title2.length())
		minLength = title1.length();
	else
		minLength = title2.length();
	
	for (int i = 0; i < minLength; i++)
	{
		if (title1[i] < title2[i])
			return true;
		if (title1[i] > title2[i])
			return false;
	}
	if (title1.length() < title2.length())
		return true;

	int year1 = this->getYear();
	int year2 = other.getYear();

	return (year1 < year2);
}

// --------------------------operator>---------------------------------
// Description: Overloads > opertaor for Comedy Movies
// ----------------------------------------------------------------------
bool Comedy::operator>(const Comedy& rhs)const
{
    return !(*this < rhs);
}

// --------------------------operator==---------------------------------
// Description: Overloads == opertaor for Comedy Movies
// ----------------------------------------------------------------------
bool Comedy::operator==(const Comedy& other)const
{
	string title1 = this->getTitle();
	string title2 = other.getTitle();

	if (title1.length() != title1.length())
	{
		return false;
	}
	else
		for (int i = 0; i < title1.length(); i++)
		{
			if (title1[i] != title2[i])
			{
				return false;
			}
		}

	int year1 = this->getYear();
	int year2 = other.getYear();

	if (year1 != year2)
		return false;
	else
		return true;
}

// --------------------------operator=---------------------------------
// Description: Overloads = opertaor for Comedy Movies
// ----------------------------------------------------------------------
Comedy& Comedy::operator=(const Comedy& rhs)
{
    setTitle(rhs.getTitle());
    setDirector(rhs.getDirector());
    setYear(rhs.getYear());
    setInv(rhs.getInv());
    return *this;
}