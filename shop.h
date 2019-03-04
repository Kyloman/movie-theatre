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
      BinTree comedy;
      BinTree drama;
      BinTree classic;
};

#endif 
