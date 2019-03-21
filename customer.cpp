// ---------------------------------- customer.h-------------------------------------------
// Programmer Name Course Section Number
// 3/12/2019
// Date of Last Modification 3/20/19
// --------------------------------------------------------------------------------------------------------------------
// Purpose - this is the class for the customer that keeps track of customer info and actions.
// --------------------------------------------------------------------------------------------------------------------
// Think of this like a dossier which notes what customers have interacted with a store. 
// --------------------------------------------------------------------------------------------------------------------


#include "customer.h"

// --------------------------Constructor---------------------------------
// Description: default constructor for customer class sets to null
// ----------------------------------------------------------------------
Customer::Customer()
{
	ident = -1;
	fName = "NULL";
	lName = "OBJECT";
}

// --------------------------Constructor---------------------------------
// Description: creates a customer class
// ----------------------------------------------------------------------
Customer::Customer(int id, string first, string last)
{
    ident = id;
    fName = first;
    lName = last;
}//end of constructor

// --------------------------borrow---------------------------------
// Description: function for when customers borrow a copy of a movie
// decreases inventory when the borrow transaction goes through
// ----------------------------------------------------------------------
void Customer::borrow(Movie* newMedia)
{
	if (newMedia->getInv() > 0)
	{
		Transaction tran(newMedia, "borrowed");
		newMedia->decreaseInv(1);
		idHistory.push_back(tran);
	}
	else
		cout << "Out of Stock" << endl;
}//end of borrow

// --------------------------return---------------------------------
// Description: function for when customers return a copy of a movie
// increases inventory when the return transaction goes through
// ----------------------------------------------------------------------
void Customer::returning(Movie* newMedia)
{
	Transaction tran(newMedia, "returned");
	newMedia->increaseInv(1);
	idHistory.push_back(tran);
    
}//end of returning

// --------------------------getHistory---------------------------------
// Description: getter for customer History 
// ----------------------------------------------------------------------
void Customer::getHistory() 
{
	int size = idHistory.size();
    string out = ""; //we are building a string to print
    
    for (int x = 0; x < size; x++)
    {
		//out += getName() + " "; 
		out += idHistory[x].toString() + "\n";
	}
	cout << "Customer #" << getID() << "'s history:" << endl;
	cout << out;
	cout << endl;
}// end of getHistroy

// --------------------------getID---------------------------------
// Description: getter for customer ID
// ----------------------------------------------------------------------
int Customer::getID()
{
	return ident;
}//end of getID

// --------------------------setID---------------------------------
// Description: setter for customer ID
// ----------------------------------------------------------------------
void Customer::setID(int newID)
{
	ident = newID;
}//end of setID

// --------------------------getName---------------------------------
// Description: getter for customer name
// ----------------------------------------------------------------------
string Customer::getName() 
{
	return fName + " " + lName;
}//end of getName

// --------------------------setName---------------------------------
// Description: setter for customer name
// ----------------------------------------------------------------------
void Customer::setName(string first, string last) 
{
	fName = first;
	lName = last;
}//end of setName
