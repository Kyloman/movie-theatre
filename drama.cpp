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
	director = copy.director;
	date = copy.date;
}
Drama& Drama::operator=(const Drama& rhs)
{
    int newStock = rhs.getInv();
    string newDirector = rhs.getDirector();
    string newTitle = rhs.getTitle();
    int newDate = rhs.getYear();
    setTitle(newTitle);
    setDirector(newDirector);
    setYear(newDate);
    setInv(newStock);
    return *this;
}
