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
    
    month = newmonth;
    majorActor = newmajoractor;
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
//Classic::Classic(const Drama& copy)
//{ 
//    title = copy.title;
//    director = copy.director;
//    year = copy.year;
//    month = copy.month;
//    majorActor = copy.majoractor;
//}
Classic& Classic::operator=(const Classic& rhs)
{
    int newStock = rhs.getInv();
    string newDirector = rhs.getDirector();
    string newTitle = rhs.getTitle();
    int newDate = rhs.getYear();
    
    setTitle(newTitle);
    setDirector(newDirector);
    setYear(newDate);
    setInv(newStock);
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

bool Classic::operator<(const Classic& rhs)const 
{
	if (this->getYear() == rhs.getYear())
	{
		if (this->getMonth() == rhs.getMonth())
			if (this->getTitle == rhs.getTitle)
				return false;
			else
				return(this->getMajorActor() < rhs.getMajorActor());
		else
			return (this->getMonth() < rhs.getMonth());
	}
	return (this->getYear() < rhs.getYear());
}
bool Classic::operator>(const Classic& rhs)const
{
	return (*this < rhs);
}
bool Classic::operator==(const Classic& rhs)const
{
	if ((*this < rhs) && (*this > rhs))
		return true;
	return false;
}
