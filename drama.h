// ---------------------------------------------------- Drama ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/2/2019
// Date of Last Modification 3/20/19
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Child class of DVD for Drama type DVD’s.
// --------------------------------------------------------------------------------------------------------------------
// To be stored in a Binary Search Tree.
// --------------------------------------------------------------------------------------------------------------------

#ifndef DRAMA_H
#define DRAMA_H
#include "movie.h"

using namespace std;
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

	//Operator Overload
    Drama& operator=(const Movie&);
	bool operator<(const Movie& rhs)const;
	bool operator>(const Movie& rhs)const;
	bool operator==(const Movie& rhs)const;
private:
	int date;
	int stock;
	string director;
	string title;
};
#endif 
