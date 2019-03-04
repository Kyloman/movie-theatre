// ------------------------------------------------ Action Maker ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Reads in data from text files provided in supportingFiles.zip and creates actions.
// --------------------------------------------------------------------------------------------------------------------
// This is what drives the Action class
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
	Action *make(istream &stream, Shop *shop);
	
private:
	// ------------------------helperFunctions-------------------------------
	// helper functions are called to make specific action.
	// ----------------------------------------------------------------------

	
	Media *findDVD(istream &stream, Shop *shop);
	
	Classics *findClassics(istream &stream, Shop *shop);
	
	Comedy *findComedy(istream &stream, Shop *shop);
	
	Drama *findDrama(istream &stream, Shop *shop);
	

	Customer *makeBorrow(istream &stream, Shop *shop);
	Customer *makeReturn(istream &stream, Shop *shop);
};
