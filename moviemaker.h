// ------------------------------------------------ moviemaker.h ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Reads in data from text files provided in supportingFiles.zip and creates movies using the included movie 
// types.
// --------------------------------------------------------------------------------------------------------------------
// Will borrow from Action class in future implementation.
// --------------------------------------------------------------------------------------------------------------------

#ifndef MOVIEMAKER_H
#define MOVIEMAKER_H

#include "DVD.h"
#include "comedy.h"
#include "drama.h"
#include "classic.h"

using namespace std;

class
{
public:
	// ------------------------------make------------------------------------
	// creates a movie, calls helper function after determining movie type
	// ----------------------------------------------------------------------
	Movie *make(istream &in);   
private:
	// ------------------------helperFunctions-------------------------------
	// helper functions are called to make specific style of Movie.
	// ----------------------------------------------------------------------
	Comedy *makeComedy
	Drama *makeDrama
	Classic *makeClassic 

};

#endif 
