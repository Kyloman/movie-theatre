//
//  club.cpp
//  assi_4
//
//  Created by Jonathan Acoltzi Rojas on 3/7/19.
//  Copyright © 2019 Jonathan Acoltzi Rojas. All rights reserved.
//

#include "club.h"
//Constructor
Club::Club()
{
    customerAmount = 0; 
    for(int i = 0; i < capacity; i++)
        arr[i] = NULL;
}

//Deconstructor
Club::~Club()
{
    
}

//Copy Constructor
//Club::Club(const Club& copy)

//functions
void Club::addMember(int ID, string last, string first, int i)
{
    Node *temp = new Node();
    
    temp->cust = new Customer(ID, last, first);
    temp->nextCust = NULL;
    if(arr[ID % capacity] == NULL  )
        arr[ID % capacity] = temp;
    
    else
    customerAmount++;

}
void Club::addMemberHelper(Node *temp, Node* current)
{
    if(current->nextCust == NULL)
        current->nextCust = temp;
    else
        addMemberHelper( temp, current->nextCust);
    
}

//KYLE WORKING ON DELETEMEMBER MIGHT NOT WORK
bool Club::deleteMember(int iD)
{
    int find = iD % capacity;
	Node* temp = arr[find];

	while (temp != NULL) {
		//if temp's id = arg's id
		// delete this and link the prev/next nodes 
		temp = temp->nextCust; 
	}
   
	return false; 
        
}

Customer* Club::find(int iD)
{
    int find = iD % capacity;
    Node* temp = arr[find];
    while(temp->Id != find)
    {
        if(temp->cust == NULL)
            return NULL;
        temp = temp->nextCust;
    }
    return arr[find]->cust; //just so code runs please change and delete comment
}

