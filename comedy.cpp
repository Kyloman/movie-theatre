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

	setComp1(getTitle());
	setComp2(to_string(getYear()));
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

	setComp1(getTitle());
	setComp2(to_string(getYear()));
}

// --------------------------operator=---------------------------------
// Description: Overloads = opertaor for Comedy Movies
// ----------------------------------------------------------------------
Comedy& Comedy::operator=(const Movie& rhs)
{
	setTitle(rhs.getTitle());
	setDirector(rhs.getDirector());
	setYear(rhs.getYear());
	setInv(rhs.getInv());
	return *this;

	setComp1(getTitle());
	setComp2(to_string(getYear()));
}


// --------------------------operator<---------------------------------
// Description: Overloads < opertaor for Comedy Movies
// ----------------------------------------------------------------------
bool Comedy::operator<(const Movie& other)const
{
	string title1 = this->getComp1();
	string title2 = other.getComp1();
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

	string year1 = this->getComp2();
	string year2 = other.getComp2();

	return (year1 < year2);
}

// --------------------------operator>---------------------------------
// Description: Overloads > opertaor for Comedy Movies
// ----------------------------------------------------------------------
bool Comedy::operator>(const Movie& rhs)const
{
    bool check1 = (*this < rhs);
    bool check2 = (*this == rhs);
    if(check1 || check2)
        return false;
    return true;
}

// --------------------------operator==---------------------------------
// Description: Overloads == opertaor for Comedy Movies
// ----------------------------------------------------------------------
bool Comedy::operator==(const Movie& other)const
{
	string title1 = this->getComp1();
	string title2 = other.getComp1();

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

	string year1 = this->getComp2();
	string year2 = other.getComp2();

	if (year1 != year2)
		return false;
	else
		return true;
}

