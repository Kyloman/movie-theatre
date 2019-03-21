// --------------------------------------------------- media.cpp ----------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/2/2019
// Date of Last Modification 3/20/19
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Parent class for DVD allows for expansion later on to different media archetypes. Keeps track of stock. 
// --------------------------------------------------------------------------------------------------------------------
// This class is built so future types of media can be inherited from this class.
// --------------------------------------------------------------------------------------------------------------------


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
