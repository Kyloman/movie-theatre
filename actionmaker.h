// ------------------------------------------------ Action Maker ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - a brief statement of the program's function
// --------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// --------------------------------------------------------------------------------------------------------------------

#ifndef ACTIONMAKER_H
#define ACTIONMAKER_H

#include <iostream>
#include "action.h"
#include "club.h"
#include "transaction.h"
#include "shop.h"
#include "customer.h"

using namespace std;


class ActionMaker
{
public:
	Action *Create(istream &stream, Store *store);
	
private:
	Shop *makeInventory(istream &stream, Store *store);
	Customer *makeHistory(istream &stream, Store *store);
	Customer *makeBorrow(istream &stream, Store *store);
	Customer *makeReturn(istream &stream, Store *store);
	Media *FindMedia(istream &stream, Store *store);
	Classics *FindClassics(istream &stream, Store *store);
	Comedy *FindComedy(istream &stream, Store *store);
	Drama *FindDrama(istream &stream, Store *store);
};