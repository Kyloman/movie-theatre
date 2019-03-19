// ------------------------------------------------ comedy.h ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Child class of DVD for Comedy type DVD’s.
// --------------------------------------------------------------------------------------------------------------------
// To be stored in a Binary Search Tree.
// --------------------------------------------------------------------------------------------------------------------

#ifndef COMEDY_H
#define COMEDY_H
using namespace std;
#include "dvd.h"

class Comedy : public DVD
{
public:
	// --------------------------constructor---------------------------------
   	// Description: creates a comedy class
  	// ----------------------------------------------------------------------
	Comedy();
	// ------------------------deconstructor---------------------------------
   	// Description: destructor
  	// ----------------------------------------------------------------------
	~Comedy();
	
	// --------------------------contructor---------------------------------
   	// Description: copy constuctor
  	// ----------------------------------------------------------------------
	Comedy(const Comedy& copy);
    bool Comedy& operator<(const Comedy& rhs);
    
private:

};

#endif 
