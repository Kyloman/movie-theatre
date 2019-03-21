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
Transaction::Transaction(Media* newMedia, string newAction) {
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

