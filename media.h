// ------------------------------------------------ file name ---------------------------------------------------------
// Programmer Name Course Section Number
// Creation Date
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - a brief statement of the program's function
// --------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// --------------------------------------------------------------------------------------------------------------------

#ifndef MEDIA_H
#define MEDIA_H

class Media
{
public:
	int getInv();
	void setInv(int amount);
	void increaseInv(int amount);
	void decreaseInv(int amount);

	virtual Media& operator==(const Media& other);
	virtual Media& operator<(const Media& other);

private:
	int inventory;
	int name; 
};

#endif 