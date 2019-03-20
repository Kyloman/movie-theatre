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
#include "customer.h"
#include <iostream>
#include <vector>

using namespace std;
class Club //: public DVD
{
public:
	//Constructor
	Club();
	
	//Deconstructor
	~Club();
	
	//Copy Constructor
	//Club(const Club& copy);
	
	//functions
	void addMember(int, string, string, int);
    bool deleteMember(int);
    bool find(int);
    Customer* getCustomer(int);
    
    
private:
    
    
	int customerAmount;
    int capacity = 10007;
    struct Node {
        int Id;
        Customer* cust;                        // pointer to data object
        Node* nextCust;                         
    };
    void addMemberHelper(Node*, Node* );
    Node *arr[10007];
    
};

#endif 
