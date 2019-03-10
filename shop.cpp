//
//  shop.cpp
//  assi_4
//
//  Created by Jonathan Acoltzi Rojas on 3/7/19.
//  Copyright © 2019 Jonathan Acoltzi Rojas. All rights reserved.
//

#include "shop.h"

Shop::Shop()
{
    //club1 = new Club();
}
Shop::~Shop() 
{
    
}
void Shop::readFileMovies(ifstream& infile)
{
    string s;

    for (;;) {
        infile >> s;
        
        if (infile.eof()) break;             // no more lines of data
        if(s == "F,")
        {
            
        }
        else if(s == "D,")
        {
            cout<<s;
        }
        else if(s == "C,")
        {
            cout<<s;
        }
        else
        { }
            
    }

}
void Shop::readFileCommands(ifstream& infile)
{
    string s;
    
    for (;;) {
        infile >> s;
        
        if (infile.eof()) break;             // no more lines of data
        if(s == "I")
        {
            cout<<s;
        }
        else if(s == "H")
        {
            cout<<s;
        }
        else if(s == "B")
        {
            cout<<s;
        }
        else if(s == "R")
        {
            cout<<s;
        }
        
        else
        {}
            
        
        
    }
}
void Shop::readFileCostumers(ifstream& infile)
{
    int ID;
    string lastName;
    string firstName;
    for (;;) {
        infile >> ID;
        infile >> lastName;
        infile >> firstName;
        if (infile.eof()) break;             // no more lines of data
        club1.addMember(ID, lastName, firstName);
    }
        
}
