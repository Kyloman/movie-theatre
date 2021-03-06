// ------------------------------------------------ comedy.h ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification 3/20/19
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Child class of movie for Comedy type movies. Represents a real movie.
// --------------------------------------------------------------------------------------------------------------------
// To be stored in a Binary Search Tree.
// --------------------------------------------------------------------------------------------------------------------


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

	setComp1(getTitle());
	setComp2(to_string(getYear()));
}//end of overloaded constructor

// ------------------------deconstructor---------------------------------
// Description: destructor
// ----------------------------------------------------------------------
Comedy::~Comedy()
{
    
}//end of deconstrutor

// --------------------------contructor---------------------------------
// Description: copy constuctor
// ----------------------------------------------------------------------
Comedy::Comedy(const Comedy& rhs)
{
	setTitle(rhs.getTitle());
	setDirector(rhs.getDirector());
	setYear(rhs.getYear());
	setInv(rhs.getInv());

	setComp1(getTitle());
	setComp2(to_string(getYear()));
}//end of copyConstructor

// --------------------------operator=---------------------------------
// Description: Overloads = opertaor for Comedy Movies
// ----------------------------------------------------------------------
Comedy& Comedy::operator=(const Movie& rhs)
{
	setTitle(rhs.getTitle());
	setDirector(rhs.getDirector());
	setYear(rhs.getYear());
	setInv(rhs.getInv());
	return *this;

	setComp1(getTitle());
	setComp2(to_string(getYear()));
}//end of operator=


// --------------------------operator<---------------------------------
// Description: Overloads < opertaor for Comedy Movies
// ----------------------------------------------------------------------
bool Comedy::operator<(const Movie& other)const
{
	string title1 = this->getComp1();
	string title2 = other.getComp1();
	int minLength = 0;
	if (title1.length() < title2.length())
		minLength = title1.length();
	else
		minLength = title2.length();
	
	for (int i = 0; i < minLength; i++)
	{
		if (title1[i] < title2[i])
			return true;
		if (title1[i] > title2[i])
			return false;
	}
	if (title1.length() < title2.length())
		return true;

	string year1 = this->getComp2();
	string year2 = other.getComp2();

	return (year1 < year2);
}//end of operator<

// --------------------------operator>---------------------------------
// Description: Overloads > opertaor for Comedy Movies
// ----------------------------------------------------------------------
bool Comedy::operator>(const Movie& rhs)const
{
    bool check1 = (*this < rhs);
    bool check2 = (*this == rhs);
    if(check1 || check2)
        return false;
    return true;
}//end of operator>

// --------------------------operator==---------------------------------
// Description: Overloads == opertaor for Comedy Movies
// ----------------------------------------------------------------------
bool Comedy::operator==(const Movie& other)const
{
	string title1 = this->getComp1();
	string title2 = other.getComp1();

	if (title1.length() != title1.length())
	{
		return false;
	}
	else
		for (int i = 0; i < title1.length(); i++)
		{
			if (title1[i] != title2[i])
			{
				return false;
			}
		}

	string year1 = this->getComp2();
	string year2 = other.getComp2();

	if (year1 != year2)
		return false;
	else
		return true;
}//end of operator==

// --------------------------toString---------------------------------
// Description: returns type string from comedy
// ----------------------------------------------------------------------
//string Comedy::toString() 
//{
//	string s1 = "";
//	s1 = getTitle() + " ";
//}