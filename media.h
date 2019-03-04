// --------------------------------------------------- Media ----------------------------------------------------------
// Programmer Name Course Section Number
// Creation Date
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Parent class for DVD allows for expansion later on to different media archetypes. 
// --------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// --------------------------------------------------------------------------------------------------------------------

#ifndef MEDIA_H
#define MEDIA_H

class Media
{
public:
	//Getter
	int getInv();
	
	//Setter
	void setInv(int amount);
	
	//functions
	void increaseInv(int amount);
	void decreaseInv(int amount);
	
	//Operator Overload
	virtual Media& operator==(const Media& other);
	virtual Media& operator<(const Media& other);

private:
	int inventory;
	int name; 
};

#endif 
