//
//  comedy.cpp
//  assi_4
//
//  Created by Jonathan Acoltzi Rojas on 3/14/19.
//  Copyright © 2019 Jonathan Acoltzi Rojas. All rights reserved.
//

#include "comedy.h"
// --------------------------constructor---------------------------------
// Description: creates a comedy class
// ----------------------------------------------------------------------
Comedy::Comedy( )
{
    
}
// ------------------------deconstructor---------------------------------
// Description: destructor
// ----------------------------------------------------------------------
Comedy::~Comedy()
{
    
}

// --------------------------contructor---------------------------------
// Description: copy constuctor
// ----------------------------------------------------------------------
Comedy::Comedy(const Comedy& copy)
{
    
}
bool Comedy::operator<(const Comedy& rhs)const
{
    if(this->getTitle() == rhs.getTitle())
        return this->getYear() < rhs.getYear();
    return this->getTitle() < rhs.getTitle();
}
bool Comedy::operator>(const Comedy& rhs)const
{
    return (*this < rhs);
}
bool Comedy::operator==(const Comedy& rhs)const
{
    if((*this < rhs) && (*this > rhs))
        return true;
    return false;
    
}
