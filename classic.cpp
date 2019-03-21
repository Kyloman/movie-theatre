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
bool Classic::operator<(const Movie& rhs)const
{
    if (this->getYear() == rhs.getYear())
    {
        if (this->getComp1() == rhs.getComp1())
            if (this->getTitle() == rhs.getTitle())
                return false;
            else
                return(this->getComp2() < rhs.getComp2());
        else
            return (this->getComp1() < rhs.getComp1());
    }
    return (this->getYear() < rhs.getYear());
}

// --------------------------operator>---------------------------------
// Description: Overloads > opertaor for Classic Movies
// ----------------------------------------------------------------------
bool Classic::operator>(const Movie& rhs)const
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

// --------------------------combineMajorActors---------------------------------
// Description: Function to add another major actor to a movie. 
// ----------------------------------------------------------------------
void Classic::combineMajorActors(string rhsActor)
{
	string actors = this->getMajorActor() + " " + rhsActor;
	this->setMajorActor(actors);
}
