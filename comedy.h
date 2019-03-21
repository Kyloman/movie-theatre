// ------------------------------------------------ comedy.h ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification 3/20/19
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

	string toString()const;
    bool operator<(const Movie& rhs)const;
    bool operator>(const Movie& rhs)const;
    bool operator==(const Movie& rhs)const;
    Comedy& operator=(const Movie&);
private:

};

#endif 
