//
//  drama.cpp
//  assi_4
//
//  Created by Marko Lakic on 3/19/19.
//  Copyright � 2019 Marko Lakic. All rights reserved.
//

#include "classic.h"

// --------------------------constructor---------------------------------
// Description: ovearloaded Constructor
// ----------------------------------------------------------------------
Classic::Classic(int newstock, string newdirector, string newtitle, string newmajoractor,int newmonth, int newyear)
{
	setTitle(newtitle);
	setDirector(newdirector);
	setYear(newyear);
	setInv(newstock);
	setMonth(newmonth);
    
    majorActor = newmajoractor;
}


// ------------------------deconstructor---------------------------------
// Description: destructor
// ----------------------------------------------------------------------
Classic::~Classic()
{

}

 //--------------------------contructor---------------------------------
 //Description: copy constuctor
 //----------------------------------------------------------------------
Classic::Classic(const Classic& copy)
{ 
	setTitle(copy.getTitle());
	setDirector(copy.getDirector());
	setYear(copy.getYear());
	setInv(copy.getInv());
}
Classic& Classic::operator=(const Classic& rhs)
{   
    setTitle(rhs.getTitle());
    setDirector(rhs.getDirector());
    setYear(rhs.getYear());
    setInv(rhs.getInv());
    month = rhs.getMonth();
    majorActor = rhs.getMajorActor();
    return *this;
}
void Classic::setMonth(int newMonth)
{
    month = newMonth;
}
// --------------------------setmajoractor---------------------------------
// Description:  sets the actor
// ----------------------------------------------------------------------
void Classic::setMajorActor(string newActor)
{
    majorActor = newActor;
}
// --------------------------getMonth---------------------------------
// Description: returns month
// ----------------------------------------------------------------------
int Classic::getMonth()const
{
    return month;
}

// --------------------------setmajoractor---------------------------------
// Description:  returns major actor the actor
// ----------------------------------------------------------------------
string Classic::getMajorActor()const
{
    return majorActor;
}

// --------------------------operator<---------------------------------
// Description: Overloads < opertaor for Classic Movies
// ----------------------------------------------------------------------
bool Classic::operator<(const Classic& rhs)const 
{
	if (this->getYear() == rhs.getYear())
	{
		if (this->getMonth() == rhs.getMonth())
            if (this->getTitle() == rhs.getTitle())
				return false;
			else
				return(this->getMajorActor() < rhs.getMajorActor());
		else
			return (this->getMonth() < rhs.getMonth());
	}
	return (this->getYear() < rhs.getYear());
}

// --------------------------operator>---------------------------------
// Description: Overloads > opertaor for Classic Movies
// ----------------------------------------------------------------------
bool Classic::operator>(const Classic& rhs)const
{
	return !(*this < rhs);
}
// --------------------------operator==---------------------------------
// Description: Overloads == opertaor for Classic Movies
// ----------------------------------------------------------------------
bool Classic::operator==(const Classic& rhs)const
{
	if ((*this < rhs) && (*this > rhs))
		return true;
	return false;
}
