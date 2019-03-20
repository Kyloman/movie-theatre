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
#include "movie.h"

using namespace std;
class Comedy : public Movie
{
public:
	// --------------------------constructor---------------------------------
   	// Description: creates a comedy class
  	// ----------------------------------------------------------------------
	Comedy(int newstock, string newdirector, string newtitle, int newdate);
	// ------------------------deconstructor---------------------------------
   	// Description: destructor
  	// ----------------------------------------------------------------------
	~Comedy();
	
	// --------------------------contructor---------------------------------
   	// Description: copy constuctor
  	// ----------------------------------------------------------------------
	Comedy(const Comedy& copy);
    bool operator<(const Comedy& rhs)const;
    bool operator>(const Comedy& rhs)const;
    bool operator==(const Comedy& rhs)const;
    Comedy& operator=(const Comedy&);
private:

};

#endif 
