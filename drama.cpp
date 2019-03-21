// ------------------------------------------------ drama.h ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification 3/20/19
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Child class of movie for drama type movies. Represents a real movie.
// --------------------------------------------------------------------------------------------------------------------
// To be stored in a Binary Search Tree.
// --------------------------------------------------------------------------------------------------------------------

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

	setComp1(getDirector());
	setComp2(title);
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

	setComp1(getDirector());
	setComp2(title);
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
	director = copy.getDirector();
	date = copy.getYear();
	setInv(copy.getInv());

	setComp1(getDirector());
	setComp2(title);
	
}

// --------------------------operator=---------------------------------
// Description: Overloads = opertaor for Drama Movies
// ----------------------------------------------------------------------
Drama& Drama::operator=(const Movie& rhs)
{
    setTitle(rhs.getTitle());
    setDirector(rhs.getDirector());
    setYear(rhs.getYear());
    setInv(rhs.getInv());

	setComp1(getDirector());
	setComp2(title);
    return *this;
}

// --------------------------operator<---------------------------------
// Description: Overloads < opertaor for Drama Movies
// ----------------------------------------------------------------------
bool Drama::operator<(const Movie& other)const
{
	//Check directors
	string director1 = this->getComp1();
	string director2 = other.getComp1();

	int chosenLength = director1.length();

	//If director 2 is smaller, we use that so no out of bounds error
	if (director1.length() > director2.length())
		chosenLength = director2.length();

	//Check directors
	for (int x = 0; x < chosenLength; x++) 
	{
		if (director1[x] < director2[x])
			return true;
		if (director1[x] > director2[x])
			return false;
	}

	//If one director is longer than the other, that's larger
	if (director1 < director2)
		return true;
	else if (director1 > director2)
		return false;


	//CHECKING TITLES NEXT
	string title1 = this->getComp2();
	string title2 = other.getComp2();

	chosenLength = title1.length();

	//If title 2 is smaller, we use that so no out of bounds error
	if (title1.length() > title2.length())
		chosenLength = title2.length();

	//Check titles
	for (int x = 0; x < chosenLength; x++) 
	{
		if (title1[x] < title2[x])
			return true;
		if (title1[x] > title2[x])
			return false;
	}

	//If one title is longer than the other, that's larger
	if (title1 < title2)
		return true;
	else if (title1 > title2) 
		return false;


	//If these are both the same, then it is false
	return false;
}

// --------------------------operator>---------------------------------
// Description: Overloads > opertaor for Drama Movies
// ----------------------------------------------------------------------
bool Drama::operator>(const Movie& rhs)const
{
    bool check1 = (*this < rhs);
    bool check2 = (*this == rhs);
    if(check1 || check2)
        return false;
    return true;
}

// --------------------------operator==---------------------------------
// Description: Overloads == opertaor for Drama Movies
// ----------------------------------------------------------------------
bool Drama::operator==(const Movie& other)const
{
	//Check directors
	string director1 = this->getComp1();
	string director2 = other.getComp1();

	if (director1.length() != director2.length())
		return false;

	//Checking if the titles are the same
	for (int x = 0; x < director1.length(); x++) 
	{
		if (director1[x] != director2[x])
			return false;
	}

	//Check titles
	string title1 = this->getComp2();
	string title2 = other.getComp2();

	if (title1.length() != title2.length())
		return false;

	//Checking if the titles are the same
	for (int x = 0; x < title1.length(); x++) 
	{
		if (title1[x] != title2[x])
			return false;
	}

	//If these are both the same, we assume they are the same!
	return true;
}
