// ------------------------------------------------ shop.h ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - The class in which text files are parsed and processed into internal data. Once processed, 
// these different types of media will be stored in a Hash Table inside of the class
// --------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// --------------------------------------------------------------------------------------------------------------------

#ifndef _H
#define _H
using namespace std;

class Shop
{
public:
      //constructors
      Shop();
      //destructors
      ~shop();
      
      readFile(ifstream& infile)
//    {
//         reads file
           
      }
      
      void printInventory();
      
Private:
      club Club;
      BST comedy;
      BST drama;
      BST classic;
};

#endif 
