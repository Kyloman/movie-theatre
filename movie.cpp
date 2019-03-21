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
}

// --------------------------deconstructor---------------------------------
// Description: default deconstructor for movie type.
// ----------------------------------------------------------------------
Movie::~Movie()
{
    
}

// --------------------------setDirector---------------------------------
// Description: sets the director for a movie to a passed parameter
// ----------------------------------------------------------------------
void Movie::setDirector(string name)
{
    director = name;
}

// --------------------------setTitle---------------------------------
// Description: sets the title for a movie to a passed parameter
// ----------------------------------------------------------------------
void Movie::setTitle(string name)
{
    title = name;
}

// --------------------------setYear---------------------------------
// Description: sets the year for a movie to a passed parameter
// ----------------------------------------------------------------------
void Movie::setYear(int yearMovie)
{
    year = yearMovie;
}

// --------------------------setComp1---------------------------------
// Description: sets the comparable1 for a movie to a passed parameter
// ----------------------------------------------------------------------
void Movie::setComp1(string comp1)
{
    comparable1 = comp1;
}

// --------------------------setComp2---------------------------------
// Description: sets the comparable2 for a movie to a passed parameter
// ----------------------------------------------------------------------
void Movie::setComp2(string comp2)
{
    comparable2 = comp2;
}

// --------------------------getName---------------------------------
// Description: gets the title for a movie 
// ----------------------------------------------------------------------
string Movie::getName()const
{
    return title;
}

// --------------------------getDirector---------------------------------
// Description: gets the director for a movie 
// ----------------------------------------------------------------------
string Movie::getDirector()const
{
    return director;
}

// --------------------------getTitle---------------------------------
// Description: gets the title for a movie 
// ----------------------------------------------------------------------
string Movie::getTitle()const
{
    return title;
}

// --------------------------getYear---------------------------------
// Description: gets the year for a movie 
// ----------------------------------------------------------------------
int Movie::getYear()const
{
    return year;
}

// --------------------------getComp1---------------------------------
// Description: gets the comparable1 for a movie 
// ----------------------------------------------------------------------
string Movie::getComp1()const
{
    return comparable1;
}

// --------------------------getComp2---------------------------------
// Description: gets the comparable2 for a movie 
// ----------------------------------------------------------------------
string Movie::getComp2()const
{
    return comparable2;
}

//Had to guess what the vars were, you magic tricked movie.h out of repo
string Movie::toString()const
{
    return (this->getTitle() + " (" + to_string(this->getYear()) + ")"); 
}

//bool Movie::operator==(const Movie& other)
//{
//    //Check comp1
//    string comp1_1 = this->getComp1();
//    string comp1_2= other.getComp1();
//    
//    if (comp1_1.length() != comp1_2.length())
//        return false;
//    
//    //Checking if the comp1 is the same
//    for (int x = 0; x < comp1_1.length(); x++) 
//    {
//        if (comp1_1[x] != comp1_2[x])
//            return false;
//    }
//
//    //Check comp2
//    string comp2_1 = getComp2();
//    string comp2_2 = other.getComp2();
//
//    if (comp2_1 != comp2_2)
//        return false;
//
//    //If these are both the same, we assume they are the same!
//    return true;
//}
//
//bool Movie::operator<(const Movie& other)
//{
//    string comp1_1 = this->getComp1();
//    string comp1_2 = other.getComp1();
//
//    int chosenLength = comp1_1.length();
//
//    //If comp 2 is smaller, we use that so no out of bounds error
//    if (comp1_1.length() > comp1_2.length())
//        chosenLength = comp1_2.length();
//
//    //Check comp1
//    for (int x = 0; x < chosenLength; x++) 
//    {
//        if (comp1_1[x] < comp1_2[x])
//            return true;
//        if (comp1_1[x] > comp1_2[x])
//            return false;
//    }
//
//    //If one comp1 is longer than the other, that's larger
//    if (comp1_1 < comp1_2) 
//        return true;
//    else if (comp1_1 > comp1_2)
//        return false;
//
//    //Check comp2
//    string comp2_1 = getComp2();
//    string comp2_2 = other.getComp2();
//
//    if (comp2_1 < comp2_2)
//        return true;
//    if (comp2_1> comp2_2)
//        return false;
//
//    return false; //if they are equal then it is false
//}
//
//bool Movie::operator>(const Movie& other)
//{
//    return !(*this < other);
//}
//
