// ------------------------------------------------ file name ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - a brief statement of the program's function
// --------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// --------------------------------------------------------------------------------------------------------------------

#ifndef COMEDY_H
#define COMEDY_H
using namespace std;
#include "dvd.h"

class Comedy : public DVD
{
public:
	Comedy();
	~Comedy();

	Comedy(const Comedy& copy);

private:

};

#endif 