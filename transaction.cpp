
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
Transaction::Transaction() {
    
}

Transaction::Transaction(Media* newMedia, string newAction) {
	type = newMedia;
	action = newAction;
}

Transaction::~Transaction() {

}

string Transaction::toString() {
	string retVal = ""; //string to return
    retVal += action + " " + type->toString();
    return retVal;

}

