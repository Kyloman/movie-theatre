// ------------------------------------------------ transaction.h ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// This class represents an action a customer can do, from borrowing to returning a movie. It tracks what type of media
// was manipulated, how many were manipulated, and who did it.
// --------------------------------------------------------------------------------------------------------------------
// Will be stored in a vector. 
// --------------------------------------------------------------------------------------------------------------------

#ifndef TRANSACTION_H
#define TRANSACTION_H
#include "media.h"
#include "customer.h"

class Transaction
{
public:
	//Constructor
	Transaction();
	
	//Deconstructor
	~Transaction();
	
	//Functions
	void printData();

private:
	Media type;
	Customer owner;
};

#endif 
