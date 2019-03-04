
// ------------------------------------------------ customer.h ---------------------------------------------------------
// Programmer Name Course Section Number
// Creation Date
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - this is the class for the customer that keeps track of costumer info and actions.
// --------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// --------------------------------------------------------------------------------------------------------------------

#ifndef _H
#define _H
#include parent


class Customer : public parent
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
    int getName(int);
    
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
    void borrow();
    // --------------------------borrow()---------------------------------
    // Description: an item is returned by the customer
    // ----------------------------------------------------------------------
    void Return():
    
    
private:
    
    int ident;
    string name;    //name of customer
    vector <type transaction> idHistory; //the history of the individual
    
};

#endif