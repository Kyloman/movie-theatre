// ------------------------------------------------ classic.h ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification 3/20/2019
// --------------------------------------------------------------------------------------------------------------------
// Child class of DVD for Classic type DVD’s. Allows the user to set and get the month and major actor of the DVD.
// --------------------------------------------------------------------------------------------------------------------
// Specially categorized using Month and Actor on top of normal DVD sorting mechanics.
// --------------------------------------------------------------------------------------------------------------------

#include "classic.h"

// --------------------------constructor---------------------------------
// Description: ovearloaded Constructor
// ----------------------------------------------------------------------
Classic::Classic(int newstock, string newdirector, string newtitle, string newmajoractor, int newmonth, int newyear)
{
    setTitle(newtitle);
    setDirector(newdirector);
    setYear(newyear);
    setInv(newstock);
    setMonth(newmonth);
    setMajorActor(newmajoractor);

    setComp1(reformatDate(getYear(), getMonth()));
    setComp2(getMajorActor());
} // end of constructor


// ------------------------deconstructor---------------------------------
// Description: destructor
// ----------------------------------------------------------------------
Classic::~Classic()
{

}// end of deconstructo

//--------------------------contructor---------------------------------
//Description: copy constuctor
//----------------------------------------------------------------------
Classic::Classic(const Classic& copy)
{
    setTitle(copy.getTitle());
    setDirector(copy.getDirector());
    setYear(copy.getYear());
    setInv(copy.getInv());
    month = copy.getMonth();
    majorActor = copy.getMajorActor();

    setComp1(reformatDate(getYear(), getMonth()));
    setComp2(getMajorActor());
}// end of copy constructor

 //--------------------------operator=---------------------------------
 //Description: overloads the = operator for classic movie types to deep
 // copy instead of shallow copy. 
 //----------------------------------------------------------------------
Classic& Classic::operator=(const Classic& rhs)
{
    setTitle(rhs.getTitle());
    setDirector(rhs.getDirector());
    setYear(rhs.getYear());
    setInv(rhs.getInv());
    month = rhs.getMonth();
    majorActor = rhs.getMajorActor();

    setComp1(reformatDate(getYear(), getMonth()));
    setComp2(getMajorActor());

    return *this;
}// end of copy  operator 

 //--------------------------setMonth---------------------------------
 //Description: sets month of release for classic movie types
 //----------------------------------------------------------------------
void Classic::setMonth(int newMonth)
{
    month = newMonth;
}//end of setMonth

// --------------------------setmajoractor---------------------------------
// Description:  sets the actor
// ----------------------------------------------------------------------
void Classic::setMajorActor(string newActor)
{
    majorActor = newActor;
}//end of setMajorActor

// --------------------------getMonth---------------------------------
// Description: returns month
// ----------------------------------------------------------------------
int Classic::getMonth()const
{
    return month;
}//end getMonth

// --------------------------getmajoractor---------------------------------
// Description:  returns major actor the actor
// ----------------------------------------------------------------------
string Classic::getMajorActor()const
{
    return majorActor;
}//end of getMajorActor

// --------------------------operator<---------------------------------
// Description: Overloads < opertaor for Classic Movies
// ----------------------------------------------------------------------
bool Classic::operator<(const Movie& other)const
{
    //Check dates
    string date1 = this->getComp1();
    string date2 = other.getComp1();

    int chosenLength = date1.length();

    //If date 2 is smaller, we use that so no out of bounds error
    if (date1.length() > date2.length())
        chosenLength = date2.length();

    //Check dates
    for (int x = 0; x < chosenLength; x++)
    {
        if (date1[x] < date2[x])
            return true;
        if (date1[x] > date2[x])
            return false;
    }

    //If one date is longer than the other, that's larger
    if (date1 < date2)
        return true;
    else if (date1 > date2)
        return false;


    //CHECKING ACTORS NEXT
    string actors1 = this->getComp2();
    string actors2 = other.getComp2();

    chosenLength = actors1.length();

    //If actors 2 is smaller, we use that so no out of bounds error
    if (actors1.length() > actors2.length())
        chosenLength = actors2.length();

    //Check actorss
    for (int x = 0; x < chosenLength; x++)
    {
        if (actors1[x] < actors2[x])
            return true;
        if (actors1[x] > actors2[x])
            return false;
    }

    //If one actors is longer than the other, that's larger
    if (actors1 < actors2)
        return true;
    else if (actors1 > actors2)
        return false;


    //If these are both the same, then it is false
    return false;
}// end of operator<

// --------------------------operator>---------------------------------
// Description: Overloads > opertaor for Classic Movies
// ----------------------------------------------------------------------
bool Classic::operator>(const Movie& rhs)const
{
    bool check1 = (*this < rhs);
    bool check2 = (*this == rhs);
    if(check1 || check2)
        return false;
    return true;
}//end of operator>

// --------------------------operator==---------------------------------
// Description: Overloads == opertaor for Classic Movies
// ----------------------------------------------------------------------
bool Classic::operator==(const Movie& other)const
{
    //Check dates
    string date1 = this->getComp1();
    string date2 = other.getComp1();

    if (date1.length() != date2.length())
        return false;

    //Checking if the titles are the same
    for (int x = 0; x < date1.length(); x++)
    {
        if (date1[x] != date2[x])
            return false;
    }

    //Check actors
    string actors1 = this->getComp2();
    string actors2 = other.getComp2();

    if (actors1.length() != actors2.length())
        return false;

    //Checking if the actorss are the same
    for (int x = 0; x < actors1.length(); x++)
    {
        if (actors1[x] != actors2[x])
            return false;
    }

    //If these are both the same, we assume they are the same!
    return true;
}//end of operator==

// --------------------------combineMajorActors---------------------------------
// Description: Function to add another major actor to a movie. 
// ----------------------------------------------------------------------
void Classic::combineMajorActors(string rhsActor)
{
    string actors = this->getMajorActor() + " " + rhsActor;
    this->setMajorActor(actors);
}//end of combineMajorActors

 // --------------------------reformatDate---------------------------------
 // Description: reformats the date for easier comparison between classic 
 // movie types.
 // ----------------------------------------------------------------------
string Classic::reformatDate(int year, int month) {
    return (to_string((year * 12 + month)));
}
