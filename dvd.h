// ------------------------------------------------------ DVD ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/2/2019
// Date of Last Modification 3/20/19
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Child of Media class. Parent class for all DVD types. 
// --------------------------------------------------------------------------------------------------------------------
// Some DVDs have special characteristics, but all of them have DVD's inherited and additional characteristics. 
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
