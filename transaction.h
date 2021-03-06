// ------------------------------------------------ transaction.h ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification 3/20/19
// --------------------------------------------------------------------------------------------------------------------
// This class represents an action a customer can do, from borrowing to returning a movie. It tracks what type of media
// was manipulated, how many were manipulated
// --------------------------------------------------------------------------------------------------------------------
// Will be stored in a vector. 
// --------------------------------------------------------------------------------------------------------------------

#ifndef TRANSACTION_H
#define TRANSACTION_H
#include "movie.h" 
//#include "customer.h"

class Transaction
{
public:
	//Constructor
    Transaction();
	Transaction(Movie* newMedia, string action);
	
	//Deconstructor
	~Transaction();
	
	//Functions
	string toString();

private:
	Movie* type;
	string action;
};

#endif 
