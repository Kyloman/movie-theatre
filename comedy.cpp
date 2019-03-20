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
bool Comedy::operator<(const Comedy& rhs)const
{
    if(this->getTitle() == rhs.getTitle())
        return this->getYear() < rhs.getYear();
    return this->getTitle() < rhs.getTitle();
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
bool Comedy::operator==(const Comedy& rhs)const
{
    if((*this < rhs) && (*this > rhs))
        return true;
    return false;
    
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