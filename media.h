// --------------------------------------------------- media.h ----------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/2/2019
// Date of Last Modification 3/20/19
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

    virtual string toString();
protected:
	int inventory = 0;
private:	
	string name;
};

#endif 
