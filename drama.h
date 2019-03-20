// ---------------------------------------------------- Drama ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Child class of DVD for Drama type DVD’s.
// --------------------------------------------------------------------------------------------------------------------
// To be stored in a Binary Search Tree.
// --------------------------------------------------------------------------------------------------------------------

#ifndef DRAMA_H
#define DRAMA_H
using namespace std;
#include "movie.h"

class Drama : public Movie
{
public:
	//Constructor
	Drama();
	Drama(int, string, string, int);
	
	//Deconstructor
	~Drama();
	
	//Copy Constructor
	Drama(const Drama& copy);
    Drama& operator=(const Drama&);
	bool operator>(const Drama& rhs)const;
	bool operator==(const Drama& rhs)const;
private:
	int date;
	int stock;
	string director;
	string title;
};
#endif 
