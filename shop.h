// ------------------------------------------------ shop.h ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - The class in which text files are parsed and processed into internal data. Once processed, 
// these different types of media will be stored in a Hash Table inside of the class
// --------------------------------------------------------------------------------------------------------------------
// Files are read here and must be according to project specification. 
// --------------------------------------------------------------------------------------------------------------------

#ifndef SHOP_H
#define SHOP_H
#include "club.h"
#include "bintree.h"
#include "drama.h"
#include "comedy.h"
#include "classic.h"
#include <fstream>
#include <iostream>
using namespace std;

class Shop
{
public:
      //constructors
      Shop();
      //destructors
      ~Shop();
      
    void readFileMovies(ifstream& infile);
    void readFileCommands(ifstream& infile);
    void readFileCostumers(ifstream& infile);
    void printInventory();
    
      
private:
    void transactionData(Customer* tempCust, Movie* tempCust, ifstream& infile);
    string stringHelper(ifstream& infile);
    Club club1;
    BinTree comedyTree;
    BinTree dramaTree;
    BinTree classicTree;
};

#endif 
