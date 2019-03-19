//
//  movie.cpp
//  assi_4
//
//  Created by Jonathan Acoltzi Rojas on 3/14/19.
//  Copyright © 2019 Jonathan Acoltzi Rojas. All rights reserved.
//

#include "movie.h"
using namespace std;

//Constructor
Movie::Movie()
{
    
}

//Deconstructor
Movie::~Movie()
{
    
}

//Setter
void Movie::setDirector(string name)
{
    
}
void Movie::setTitle(string name)
{
    
}

//Getters
void Movie::getName()
{
	return this.name;
}
string Movie::getDirector()
{
    return this.director;
}
string Movie::getTitle()
{
    
    return this.title;
}
string Movie::getDate()
{
    return this.date;
}

//Had to guess what the vars were, you magic tricked movie.h out of repo
string Movie::toString() {
	return (this.getTitle() + " (" + this.getDate() + ")")
}

bool Movie::operator==(const Movie& other) {
	//Check titles
	string title1 = this.getTitle();
	string title2 = other.getTitle(); 

	if (title1.length != title2.length) {
		return false;
	}
	
	for (int x = 0; x < title1.lenth; x++) {
		if (title1.charAt(x) != title2.charAt(x)) {
			return false;
		}
	}

	//Check dates
	string date1 = this.getDate();
	string date2 = other.getDate();

	if (date1.length != date2.length) {
		return false;
	}

	for (int x = 0; x < date1.lenth; x++) {
		if (date1.charAt(x) != date2.charAt(x)) {
			return false;
		}
	}

	//If these are both the same, we assume they are the same!
	return true;
}

}