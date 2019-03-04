// ---------------------------------------------------- Drama ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Child class of DVD for Drama type DVD’s.
// --------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// --------------------------------------------------------------------------------------------------------------------

#ifndef DRAMA_H
#define DRAMA_H
using namespace std;
#include "dvd.h"

class Drama : public DVD
{
public:
	//Constructor
	Drama();
	
	//Deconstructor
	~Drama();
	
	//Copy Constructor
	Drama(const Drama& copy);

private:

};

#endif 
