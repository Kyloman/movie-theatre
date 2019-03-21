//
//  media.cpp
//  plsWork
//
//  Created by Jonathan Acoltzi Rojas on 3/20/19.
//  Copyright © 2019 Jonathan Acoltzi Rojas. All rights reserved.
//

#include "media.h"

// --------------------------constructor---------------------------------
// Description: default constructor for the media type
// ----------------------------------------------------------------------
Media::Media()
{
    inventory = 0;
    name = "";
}

// --------------------------getInv---------------------------------
// Description: returns the inventory amount of a media 
// ----------------------------------------------------------------------
int Media::getInv()const
{
    return inventory;
}

// --------------------------setInv---------------------------------
// Description: sets the inventory to a passed parameter amount
// ----------------------------------------------------------------------
void Media::setInv(int amount)
{
    inventory = amount;
}

// --------------------------increaseInv---------------------------------
// Description: increases inv by passed parameter amount
// ----------------------------------------------------------------------
void Media::increaseInv(int amount)
{
    inventory += amount;
}

// --------------------------decreaseInv---------------------------------
// Description: decreases inv by passed parameter amount 
// ----------------------------------------------------------------------
void Media::decreaseInv(int amount)
{
    inventory -= amount;
}

// --------------------------toString---------------------------------
// Description: returns a type string of a media type
// ----------------------------------------------------------------------
string Media::toString()
{
    string mediaString = "";
    mediaString += to_string(inventory) + " " + name;
    return mediaString;
    
}
