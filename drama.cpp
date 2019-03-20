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
Drama& Drama::operator=(const Drama& rhs)
{
    setTitle(rhs.getTitle());
    setDirector(rhs.getDirector());
    setYear(rhs.getYear());
    setInv(rhs.getInv());
    return *this;
}

bool Drama::operator<(const Drama& rhs)const 
{
	if (this->getDirector() == rhs.getDirector())
		return (this->getTitle() < rhs.getTitle());
	return (this->getDirector() < rhs.getDirector());
}
bool Drama::operator>(const Drama& rhs)const
{
	return (*this < rhs);
}
bool Drama::operator==(const Drama& rhs)const
{
	if ((*this < rhs) && (*this > rhs))
		return true;
	return false;
}
