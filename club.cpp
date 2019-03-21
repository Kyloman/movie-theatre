//
//  club.cpp
//  assi_4
//
//  Created by Jonathan Acoltzi Rojas on 3/7/19.
//  Copyright © 2019 Jonathan Acoltzi Rojas. All rights reserved.
//

#include "club.h"
// --------------------------constructor---------------------------------
// Description: creats a new club class
// ----------------------------------------------------------------------
Club::Club()
{
    customerAmount = 0; 
    for(int i = 0; i < capacity; i++)
        arr[i] = NULL;
}

// --------------------------deconstructor---------------------------------
// Description: clears out the club class then deletes it to free memory
// ----------------------------------------------------------------------
Club::~Club()
{
	Node *clear = arr[0];
	
	for (int x = 1; x < capacity; x++) {
		Node *temp = clear;
		clear = clear->nextCust;
		delete temp->cust;
		delete temp; 
	}
}

//Copy Constructor
//Club::Club(const Club& copy)

//functions
// --------------------------addMember---------------------------------
// Description: creats a new member with their full name and ID
// ----------------------------------------------------------------------
void Club::addMember(int ID, string last, string first, int i)
{
    Node *temp = new Node();
    Node *current = arr[ID % capacity];
    temp->cust = new Customer(ID, last, first);
    temp->Id = ID;
    temp->nextCust = NULL;
    if(arr[ID % capacity] == NULL  )
    {
        arr[ID % capacity] = temp;
        cout<< arr[ID % capacity]->Id;
    }
    else
        addMemberHelper(temp, current);
    customerAmount++;

}

// --------------------------addMemberHelper---------------------------------
// Description: helper function for addMember function
// ----------------------------------------------------------------------
void Club::addMemberHelper(Node *temp, Node* current)
{
    if(current->nextCust == NULL)
    {
        current->nextCust = temp;
    }
    else
        addMemberHelper( temp, current->nextCust);
    
}

// --------------------------deleteMember---------------------------------
// Description: removes a member and unties pointers to free memory
// ----------------------------------------------------------------------
//KYLE WORKING ON DELETEMEMBER MIGHT NOT WORK
bool Club::deleteMember(int iD)
{
    int find = iD % capacity;
	Node* temp = arr[find];
	Node* placeholder = arr[find];


	while (temp != NULL) {
		if (temp->Id == iD) {
			// delete this and link the prev/next nodes 

			return true;
		}
		temp = temp->nextCust; 
	}
   
	return false; 
        
}

// --------------------------find---------------------------------
// Description: searches club to find a specific member in the clu via ID
// returns true if found, false if the member doesnt exist
// ----------------------------------------------------------------------
bool Club::find(int iD)
{
    int find = (iD % capacity);
    Node* temp = arr[find];
    if(temp != NULL)
    {
        while(temp->Id != iD)
        {
            if(temp->cust == NULL)
                return false;
            temp = temp->nextCust;
        }
    }
    else
        return true;
    //just so code runs please change and delete comment
}

// --------------------------getMember---------------------------------
// Description: returns a pointer to customer found by passing their ID
// ----------------------------------------------------------------------
Customer* Club::getCustomer(int iD)
{
    int find = iD % capacity;
    Node* temp = arr[find];
    while(temp->Id != iD)
    {
        if(temp->cust == NULL)
            return NULL;
        temp = temp->nextCust;
    }
    return temp->cust;
}

