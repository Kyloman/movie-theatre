// ------------------------------------------------ classic.h ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Child class of DVD for Classic type DVD’s. Allows the user to set and get the month and major actor of the DVD.
// --------------------------------------------------------------------------------------------------------------------
// Specially categorized using Month and Actor on top of normal DVD sorting mechanics.
// --------------------------------------------------------------------------------------------------------------------

#ifndef CLASSIC_H
#define CLASSIC_H
using namespace std;
#include "dvd.h"
#include <string>

class Classic : public DVD
{
public:
	// --------------------------constructor---------------------------------
    	// Description: creates a clasic dvd
    	// ----------------------------------------------------------------------
	Classic();
	// --------------------------destructor---------------------------------
    	// Description: deletes the itmes in the class 
    	// ----------------------------------------------------------------------
	~Classic();
	// --------------------------constructor---------------------------------
    	// Description: creates an exact copy of an already existing comedy class
    	// ----------------------------------------------------------------------
	Classic(const Classic& copy);

	// --------------------------setMonth---------------------------------
   	// Description: sets the month of the DVD
    	// ----------------------------------------------------------------------
	void setMonth(int newMonth);
	// --------------------------setmajoractor---------------------------------
   	// Description:  sets the actor
    	// ----------------------------------------------------------------------
	void setMajorActor(string newActor);
	// --------------------------getMonth---------------------------------
   	// Description: returns month
    	// ----------------------------------------------------------------------
	int getMonth();
	
	// --------------------------setmajoractor---------------------------------
   	// Description:  returns major actor the actor
    	// ----------------------------------------------------------------------
	string getMajorActor();
   // bool Classic& operator<(const Classic& other);

private:
	int month;
	string majorActor;
};

#endif 
