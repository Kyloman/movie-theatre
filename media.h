// --------------------------------------------------- Media ----------------------------------------------------------
// Programmer Name Course Section Number
// Creation Date
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Parent class for DVD allows for expansion later on to different media archetypes. Keeps track of stock. 
// --------------------------------------------------------------------------------------------------------------------
// This class is built so future types of media can be inherited from this class.
// --------------------------------------------------------------------------------------------------------------------

#ifndef MEDIA_H
#define MEDIA_H
#include <string>
using namespace std;

class Media
{
public:
    Media();
    //Getter
	int getInv()const;
	
	//Setter
	void setInv(int amount);
	
	//functions
	void increaseInv(int amount);
	void decreaseInv(int amount);

    string toString();

private:
	int inventory;
	string name;
};

#endif 
