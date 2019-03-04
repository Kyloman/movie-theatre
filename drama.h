// ------------------------------------------------ file name ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - a brief statement of the program's function
// --------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// --------------------------------------------------------------------------------------------------------------------

#ifndef DRAMA_H
#define DRAMA_H
using namespace std;
#include "dvd.h"

class Drama : public DVD
{
public:
	Drama();
	~Drama();

	Drama(const Drama& copy);

private:

};

#endif 