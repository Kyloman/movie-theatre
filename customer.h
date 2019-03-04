
// ------------------------------------------------ customer.h ---------------------------------------------------------
// Programmer Name Course Section Number
// Creation Date
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - this is the class for the customer that keeps track of costumer info and actions.
// --------------------------------------------------------------------------------------------------------------------
// Think of this like a dossier which notes what customers have interacted with a store. 
// --------------------------------------------------------------------------------------------------------------------

#ifndef _H
#define _H
#include Club


class Customer : public Club
{
public:
    // --------------------------constructor---------------------------------
    // Description: creates a new customer with a unique ID
    // ----------------------------------------------------------------------
    Customer();
    
    // --------------------------getId---------------------------------
    // Description: returns the Id of a customer by name
    // ----------------------------------------------------------------------
    int getId(string);
    
     // --------------------------getName(int)---------------------------------
    // Description: returns the name as a string of the ID
    // ----------------------------------------------------------------------
    string getName(int);
    
    // --------------------------getId---------------------------------
    // Description: returns the Id of a customer by name
    // ----------------------------------------------------------------------
    int getId(string);
    
     // --------------------------getHistory---------------------------------
    // Description: prints using cout<< the history of customer
    // ----------------------------------------------------------------------
    void getHistory();
    
    // --------------------------borrow()---------------------------------
    // Description: an item is borrowed by the customer
    // ----------------------------------------------------------------------
    
     // --------------------------setName(string, string)---------------------------------
    // Description: an item is borrowed by the customer
    // ----------------------------------------------------------------------
    void setName(string, string);
    
    void borrow();
    // --------------------------borrow()---------------------------------
    // Description: an item is returned by the customer
    // ----------------------------------------------------------------------
    void Return():
    // --------------------------==---------------------------------
    // Description: returns true if two customers are the same
    // ----------------------------------------------------------------------
    bool operator==(const Customer &) const;
	// --------------------------==---------------------------------
    // Description: returns false if two customers are the same
    // ----------------------------------------------------------------------
    bool operator!=(const Customer &) const;
	
    
    
private:
    void setID();
   
    int ident;
    string name;    //name of customer
    vector <type transaction> idHistory; //the history of the individual
    
};

#endif
