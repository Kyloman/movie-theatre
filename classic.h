// ------------------------------------------------ file name ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - a brief statement of the program's function
// --------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// --------------------------------------------------------------------------------------------------------------------

#ifndef CLASSIC_H
#define CLASSIC_H
using namespace std;
#include "dvd.h"
#include <string>

class Classic : public DVD
{
public:
	Classic();
	~Classic();

	Classic(const Classic& copy);

	void setMonth(int newMonth);
	void setMajorActor(string newActor);
	int getMonth();
	string getMajorActor();


private:
	int month;
	string majorActor;
};

#endif 