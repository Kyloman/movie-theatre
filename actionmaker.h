// ------------------------------------------------ Action Maker ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Reads in data from text files provided in supportingFiles.zip and creates actions.
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
	// ---------------------------- Make ------------------------------------
	// Creates an action, calls helper function after determining action type 
	// ----------------------------------------------------------------------
	Action *Make(istream &stream, Shop *shop);
	
private:
	// ------------------------helperFunctions-------------------------------
	// helper functions are called to make specific style of Movie.
	// ----------------------------------------------------------------------
	Shop *makeInventory(istream &stream, Shop *shop);
	Customer *makeHistory(istream &stream, Shop *shop);
	Customer *makeBorrow(istream &stream, Shop *shop);
	Customer *makeReturn(istream &stream, Shop *shop);
	Media *FindMedia(istream &stream, Shop *shop);
	Classics *FindClassics(istream &stream, Shop *shop);
	Comedy *FindComedy(istream &stream, Shop *shop);
	Drama *FindDrama(istream &stream, Shop *shop);
};
