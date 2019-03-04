// ------------------------------------------------ hash table --------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - create a hashtable to keep track of customers
// --------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// --------------------------------------------------------------------------------------------------------------------

#ifndef HASHTABLE_H
#define HASHTABLE_H
using namespace std;

template<class H> //hash template
class HashTable
{
public:
	// --------------------------constructor---------------------------------
    	// Description: creates an empty table for customers 
   	// ----------------------------------------------------------------------
	HashTable();
	// --------------------------destructor---------------------------------
   	// Description: creates a new customer with a unique ID
  	// ----------------------------------------------------------------------
	~HashTable();
	// --------------------------isEmpty---------------------------------
   	// Description: returns true if empty
  	// ----------------------------------------------------------------------
	bool isEmpty();
	
	// --------------------------getSize---------------------------------
   	// Description: returns size of hashTable
  	// ----------------------------------------------------------------------
	int getSize();
	
	// ----------------------------getItemsAmounts -------------------------------
   	// Description: returns amount of customers
  	// ----------------------------------------------------------------------
	int getItemsAmount();
	// --------------------------empty---------------------------------
   	// Description: empties the hashTable
  	// ----------------------------------------------------------------------
	void empty();
	// --------------------------remove---------------------------------
   	// Description: removes targeted and if so returns true
  	// ----------------------------------------------------------------------
	bool remove(N* item);
	// --------------------------insert---------------------------------
   	// Description: insets targeted and if so returns true
  	// ----------------------------------------------------------------------
	bool insert(N* item);
	
	// --------------------------has---------------------------------
   	// Description: returns true if has item
  	// ----------------------------------------------------------------------
	bool has(N* item);






private:
	int size;
	int itemsAmount;
	struct Node
	{
		H* data;
		int id;
		Node* next;
	};

	struct HashNode
	{
		Node* nodeData;
		int amount;
	};

};

#endif 
