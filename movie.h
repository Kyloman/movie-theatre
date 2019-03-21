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
	void setYear(int name);
    void setComp1(string);
    void setComp2(string);
	//Getters
    string getName()const;
	string getDirector()const;
	string getTitle()const;
	string getComp1()const;
	string getComp2()const;
	int getYear()const;
    

	string toString()const;
    virtual bool operator==(const Movie& other) = 0;
    virtual bool operator<(const Movie& other) = 0;
    virtual bool operator>(const Movie& other) = 0;
private:
    int year;
    int stock;
    string director;
	string title;
    string comparable1;
    string comparable2;
};

#endif 
