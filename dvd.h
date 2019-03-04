// ------------------------------------------------ file name ---------------------------------------------------------
// Programmer Name Course Section Number
// Creation Date
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - a brief statement of the program's function
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
	DVD();
	~DVD();

	void setDirector(string name);
	void setTitle(string name);
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