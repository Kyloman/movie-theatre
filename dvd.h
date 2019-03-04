// ------------------------------------------------------ DVD ---------------------------------------------------------
// Programmer Name Course Section Number
// Creation Date
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Child of Media class. Parent class for all DVD types. 
// --------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// --------------------------------------------------------------------------------------------------------------------

#ifndef DVD_H
#define DVD_H
#include "media.h"
#include <string>

using namespace std;


class DVD : public Media
{
public:
	//Constructor
	DVD();
	
	//Deconstructor
	~DVD();
	
	//Setter
	void setDirector(string name);
	void setTitle(string name);
	
	//Getters
	void getDate(string name);
	string getDirector();
	string getTitle();
	string getDate(); 

private:
	string director;
	string title;
	string releaseDate; 
};

#endif 
