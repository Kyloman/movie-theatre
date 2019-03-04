// ----------------------------------------------------- club ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// This Club represents a list of customers that have interacted with the shop. You can add customers and see how many
// are in.
// --------------------------------------------------------------------------------------------------------------------
// Customers are stored in a hash table. 
// --------------------------------------------------------------------------------------------------------------------

#ifndef CLUB_H
#define CLUB_H
using namespace std;
#include "dvd.h"
#include "customer.h"
#include "hashtable.h"

class Club : public DVD
{
public:
	//Constructor
	Club();
	
	//Deconstructor
	~Club();
	
	//Copy Constructor
	Club(const Club& copy);
	
	//functions
	void addMember(Customer newCustomer);

private:
	int customerAmount;
	HashTable<Customer> customers;
};

#endif 
