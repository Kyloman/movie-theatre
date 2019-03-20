// =------------------------------------------------ main.cpp -------------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Creates a single shop object which reads all the files from supportingFiles.zip to test and make sure all 
// functions are working properly. 
// --------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// --------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include "shop.h"

using namespace std;

int main()
{
    ifstream infile("data4Movies.txt");
    if (!infile) {
        cout << "File could not be opened." << endl;
        return 1;
    }
    
    ifstream infile2("data4Commands.txt");
    if (!infile2) {
        cout << "File could not be opened." << endl;
        return 1;
    }
    
    ifstream infile3("data4Customers.txt");
    if (!infile3) {
        cout << "File could not be opened." << endl;
        return 1;
    }
    
    Shop jonnyStore;
    jonnyStore.readFileCostumers(infile3);
    jonnyStore.readFileMovies(infile);
    jonnyStore.readFileCommands(infile2);
    
	return 0;
}
