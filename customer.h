// ---------------------------------- customer.h-------------------------------------------
// Programmer Name Course Section Number
// 3/2/2019
// Date of Last Modification 3/20/19
// --------------------------------------------------------------------------------------------------------------------
// Purpose - this is the class for the customer that keeps track of customer info and actions.
// --------------------------------------------------------------------------------------------------------------------
// Think of this like a dossier which notes what customers have interacted with a store. 
// --------------------------------------------------------------------------------------------------------------------

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include "movie.h"
#include "transaction.h"
#include <vector>

using namespace std;


class Customer //: public Customer
{
public:
	// -------------------------default constructor---------------------------------
	// Description: creates an empty customer
	// ----------------------------------------------------------------------
	Customer();

	// --------------------------constructor---------------------------------
	// Description: creates a new customer with a unique ID
	// ----------------------------------------------------------------------
	Customer(int, string, string);


	// --------------------------getName()---------------------------------
	// Description: returns the name of a customer
	// ----------------------------------------------------------------------
	string getName();


	// --------------------------setName(string, string)---------------------------------
	// Description: an item is borrowed by the customer
	// ----------------------------------------------------------------------
	void setName(string, string);

	// --------------------------getID()---------------------------------
	// Description: returns the id of a customer
	// ----------------------------------------------------------------------
	int getID();

	// --------------------------getID()---------------------------------
	// Description: sets the id of a customer
	// ----------------------------------------------------------------------
	void setID(int);

	// --------------------------getHistory---------------------------------
	// Description: prints using cout<< the history of customer
	// ----------------------------------------------------------------------
	void getHistory();

	// --------------------------borrow()---------------------------------
	// Description: an item is borrowed by the customer
	// ----------------------------------------------------------------------
	void borrow(Media*);
	// --------------------------borrow()---------------------------------
	// Description: an item is returned by the customer
	// ----------------------------------------------------------------------
	void returning(Media*);
	// --------------------------==---------------------------------
	// Description: returns true if two customers are the same
	// ----------------------------------------------------------------------
	//bool operator==(const Customer &) const;
	// --------------------------==---------------------------------
	// Description: returns false if two customers are the same
	// ----------------------------------------------------------------------
	// bool operator!=(const Customer &) const;

private:

	string fName;      //name of customer
	string lName;


	int ident;
	vector<Transaction> idHistory; //the history of all borrows/returns


};

#endif