//
//  media.cpp
//  plsWork
//
//  Created by Jonathan Acoltzi Rojas on 3/20/19.
//  Copyright © 2019 Jonathan Acoltzi Rojas. All rights reserved.
//

#include "media.h"

Media::Media()
{
    inventory = 0;
    name = "";
}
//getters
int Media::getInv()const
{
    return inventory;
}

//Setter
void Media::setInv(int amount)
{
    inventory = amount;
}

//functions
void Media::increaseInv(int amount)
{
    inventory += amount;
}
void Media::decreaseInv(int amount)
{
    inventory -= amount;
}

string Media::toString()
{
    string mediaString = "";
    mediaString += to_string(inventory) + " " + name;
    return mediaString;
    
}
