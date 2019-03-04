// ------------------------------------------------ file name ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - a brief statement of the program's function
// --------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
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
	Club();
	~Club();

	Club(const Club& copy);

	void addMember(Customer newCustomer);

private:
	int customerAmount;
	HashTable<Customer> customers;
	

};

#endif 