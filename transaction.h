// ------------------------------------------------ transaction.h ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - a brief statement of the program's function
// --------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// --------------------------------------------------------------------------------------------------------------------

#ifndef TRANSACTION_H
#define TRANSACTION_H
#include "media.h"
#include "customer.h"

class Media
{
public:
	//Constructor
	Media();
	
	//Deconstructor
	~Media();
	
	//Functions
	void printData();

private:
	Media type;
	Customer owner;
};

#endif 
