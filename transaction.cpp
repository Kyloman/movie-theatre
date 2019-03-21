
// ------------------------------------------------ transaction.cpp ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// This class represents an action a customer can do, from borrowing to returning a movie. It tracks what type of media
// was manipulated, how many were manipulated
// --------------------------------------------------------------------------------------------------------------------
// Will be stored in a vector. 
// --------------------------------------------------------------------------------------------------------------------

#include "transaction.h"
//#include "customer.h"
using namespace std;

// --------------------------constructor---------------------------------
// Description: creates a default transaction class
// ----------------------------------------------------------------------
Transaction::Transaction() {
    
}

// --------------------------constructor---------------------------------
// Description: creates a transaction class with parameters 
// ----------------------------------------------------------------------
Transaction::Transaction(Movie* newMedia, string newAction) {
	type = newMedia;
	action = newAction;
}

// --------------------------deconstructor---------------------------------
// Description: default deconstructor for transaction class
// ----------------------------------------------------------------------
Transaction::~Transaction() {

}

// --------------------------toString---------------------------------
// Description: represents a transaction as a string type.
// ----------------------------------------------------------------------
string Transaction::toString() {
	string retVal = ""; //string to return
    retVal += action + " " + type->toString();
    return retVal;

}

