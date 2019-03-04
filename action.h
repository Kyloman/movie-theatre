// ------------------------------------------------ action.h ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - The purpose of this class is to simplify actions done by other classes and reduce their size considerably.
// Furthermore, this will allow future implementation of new actions to be much easier, as they can just be added
// to this class. 
// --------------------------------------------------------------------------------------------------------------------
// These actions will be handled by our action manager class. 
// --------------------------------------------------------------------------------------------------------------------

#ifndef ACTION_H
#define ACTION_H
#include "customer.h"
#include "shop.h"
#include "club.h"

class Action
{
public:
	//Constructor
	Action();

	//Deconstructor
	~Action();

	//Functions
	void printData();


private:

};

#endif 