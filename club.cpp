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
    

    arr[ID % capacity] = temp;
    //cusr.push_back(cus);
    customerAmount++;

}
