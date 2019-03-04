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
      
    void readFileMovies(ifstream& infile)
//        reads files data4Movies
//        if does not worrk
//            print does not work
//
//        while(file doen not end)
//            if (leter on line is F)
//                make comedy movie
//            else if (leter on line is C)
//                make comedy movie
//            else if (leter on line is D)
//                make comedy movie
//            else
//                print"error"
//
    void readFileCommands(ifstream& infile)
//        reads files data4Comands
//        if does not worrk
//            print does not work
//        while(file doesnt end)
//            if (leter on line is I)
//                output all Comedy movies, then all Dramas, then all Classics
//            else if (leter on line is H)
//                print History
//            else if (leter on line is B)
//                borrow item
//            else if (leter on line is R)
//                return item
//            else
//                print"error"
//
    void readFileCostumers(ifstream& infile)
//            reads file data4customers
//                if does not worrk
//                    print does not work
//                while(file does not end)
//                    make new costumer
//

      void printInventory();
      
Private:
      club Club;
      BinTree comedy;
      BinTree drama;
      BinTree classic;
};

#endif 
