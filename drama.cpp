//
//  drama.cpp
//  assi_4
//
//  Created by Marko Lakic on 3/19/19.
//  Copyright © 2019 Marko Lakic. All rights reserved.
//

#include "drama.h"
// --------------------------constructor---------------------------------
// Description: creates a comedy class
// ----------------------------------------------------------------------
Drama::Drama()
{
	title = "";
	director = "";
	date = 0;	
	stock = 0;
}

// --------------------------constructor---------------------------------
// Description: overloaded Constructor
// ----------------------------------------------------------------------
Drama::Drama(int newstock, string newdirector, string newtitle, int newdate)
{
	title = newtitle;
	director = newdirector;
	date = newdate;
	stock = newstock;
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
	title = copy.title;
	director = copy.director;
	date = copy.date;
}