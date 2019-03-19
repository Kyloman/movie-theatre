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
}
Customer::Customer(int id, string first, string last)
{
    ident = id;
    fName = first;
    lName = last;
}
void Customer::borrow(Movie* bMovie)
{
    string borrowed = to_string(iD) + " ";
    borrowed += bMovie.toString();
    history.push_back(borrowed);
    
}
void Customer::Return(Movie* rMovie)
{
    string returned = to_string(iD) + " ";
    returned += rMovie.toString();
    history.push_back(returned);
}
void Customer::getHistory()
{
    for (auto i = history.begin(); i != history.end(); ++i)
        cout << *i << " ";
}
