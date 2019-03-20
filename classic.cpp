//
//  drama.cpp
//  assi_4
//
//  Created by Marko Lakic on 3/19/19.
//  Copyright © 2019 Marko Lakic. All rights reserved.
//

#include "classic.h"
// --------------------------constructor---------------------------------
// Description: creates a comedy class
// ----------------------------------------------------------------------
Classic::Classic()
{
	title = "";
	director = "";
	majorActor = "";
	month = 0;
	year = 0;
	setInv(0);
}

// --------------------------constructor---------------------------------
// Description: ovearloaded Constructor
// ----------------------------------------------------------------------
Classic::Classic(int newstock, string newdirector, string newtitle, string newmajoractor,int newmonth, int newyear)
{
	title = newtitle;
	director = newdirector;
	year = newyear;
	month = newmonth;
	majorActor = newmajoractor;
	setInv(newstock);
}


// ------------------------deconstructor---------------------------------
// Description: destructor
// ----------------------------------------------------------------------
Classic::~Classic()
{

}

// --------------------------contructor---------------------------------
// Description: copy constuctor
// ----------------------------------------------------------------------
Classic::Classic(const Drama& copy)
{
	title = copy.title;
	director = copy.director;
	year = copy.year;
	month = copy.month;
	majorActor = copy.majoractor;
}