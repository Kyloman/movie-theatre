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
string Media::toString()const
{
    string mediaString = "";
    mediaString += to_string(inventory) + " " + name;
    return mediaString;
    
}
