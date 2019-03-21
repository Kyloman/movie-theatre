// ------------------------------------------------------ movie.cpp ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification 3/20/19
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Child of Media class. Parent class for all Movie types.
// --------------------------------------------------------------------------------------------------------------------
// Some Movies have special characteristics, but all of them have Movie's inherited and additional characteristics.
// --------------------------------------------------------------------------------------------------------------------


#include "movie.h"
using namespace std;

// --------------------------constructor---------------------------------
// Description: default constructor for movie type.
// ----------------------------------------------------------------------
Movie::Movie()
{
    title = "";
    director = "";
    year = 0;
	stock = 0;
}// end of constructor

// --------------------------deconstructor---------------------------------
// Description: default deconstructor for movie type.
// ----------------------------------------------------------------------
Movie::~Movie()
{
    
}//end of deconstructor

// --------------------------setDirector---------------------------------
// Description: sets the director for a movie to a passed parameter
// ----------------------------------------------------------------------
void Movie::setDirector(string name)
{
    director = name;
}//end of setDirector

// --------------------------setTitle---------------------------------
// Description: sets the title for a movie to a passed parameter
// ----------------------------------------------------------------------
void Movie::setTitle(string name)
{
    title = name;
}//end of setTitle

// --------------------------setYear---------------------------------
// Description: sets the year for a movie to a passed parameter
// ----------------------------------------------------------------------
void Movie::setYear(int yearMovie)
{
    year = yearMovie;
}//end of setYear

// --------------------------setComp1---------------------------------
// Description: sets the comparable1 for a movie to a passed parameter
// ----------------------------------------------------------------------
void Movie::setComp1(string comp1)
{
    comparable1 = comp1;
}//end of setComp1

// --------------------------setComp2---------------------------------
// Description: sets the comparable2 for a movie to a passed parameter
// ----------------------------------------------------------------------
void Movie::setComp2(string comp2)
{
    comparable2 = comp2;
}//end of setComp2

// --------------------------getName---------------------------------
// Description: gets the title for a movie 
// ----------------------------------------------------------------------
string Movie::getName()const
{
    return title;
}//end of getName

// --------------------------getDirector---------------------------------
// Description: gets the director for a movie 
// ----------------------------------------------------------------------
string Movie::getDirector()const
{
    return director;
}//end of getDirector

// --------------------------getTitle---------------------------------
// Description: gets the title for a movie 
// ----------------------------------------------------------------------
string Movie::getTitle()const
{
    return title;
}//end of getTitle

// --------------------------getYear---------------------------------
// Description: gets the year for a movie 
// ----------------------------------------------------------------------
int Movie::getYear()const
{
    return year;
}//end of getYear

// --------------------------getComp1---------------------------------
// Description: gets the comparable1 for a movie 
// ----------------------------------------------------------------------
string Movie::getComp1()const
{
    return comparable1;
}//end of getComp1

// --------------------------getComp2---------------------------------
// Description: gets the comparable2 for a movie 
// ----------------------------------------------------------------------
string Movie::getComp2()const
{
    return comparable2;
}//end of getComp2

//Had to guess what the vars were, you magic tricked movie.h out of repo
string Movie::toString()const
{
    return (this->getTitle() + " (" + to_string(this->getYear()) + ")"); 
}//end of toString

