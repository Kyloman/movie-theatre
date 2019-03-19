// ------------------------------------------------------ Movie ---------------------------------------------------------
// Programmer Name Course Section Number
// Creation Date
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Child of Media class. Parent class for all Movie types.
// --------------------------------------------------------------------------------------------------------------------
// Some Movies have special characteristics, but all of them have Movie's inherited and additional characteristics.
// --------------------------------------------------------------------------------------------------------------------

#ifndef Movie_H
#define Movie_H
#include "media.h"
#include <string>

using namespace std;


class Movie : public Media
{
public:
	//Constructor
	Movie();
	
	//Deconstructor
	~Movie();
	
	//Setter
	void setDirector(string name);
	void setTitle(string name);
	
	//Getters
	void getDate(string name);
	string getDirector();
	string getTitle();
	string getDate(); 

private:
    int stock;
    string director;
	string title;
};

#endif 
