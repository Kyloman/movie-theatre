//
//  customer.cpp
//  assi_4
//
//  Created by Jonathan Acoltzi Rojas on 3/10/19.
//  Copyright © 2019 Jonathan Acoltzi Rojas. All rights reserved.
//

#include "customer.h"

Customer::Customer()
{
	ident = -1;
	fName = "NULL";
	lName = "OBJECT";
}
Customer::Customer(int id, string first, string last)
{
    ident = id;
    fName = first;
    lName = last;
}
void Customer::borrow(Media* newMedia)
{
	Transaction tran(newMedia, "borrowed");

	idHistory.push_back(tran);
}

void Customer::returning(Media* newMedia)
{
	Transaction tran(newMedia, "returned");
	idHistory.push_back(tran);
    
}

void Customer::getHistory() 
{
	int size = idHistory.size();
	string out = ""; //we are building a string to print
	for (int x = 0; x < size; x++)
    {
        cout<<idHistory[x].toString()<<endl;
	}
	cout << out << endl;
}

int Customer::getID() {
	return ident;
}

void Customer::setID(int newID) {
	ident = newID;
}

string Customer::getName() {
	return fName + " " + lName;
}

void Customer::setName(string first, string last) {
	fName = first;
	lName = last;
}
