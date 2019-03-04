// ------------------------------------------------ hash table --------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification
// --------------------------------------------------------------------------------------------------------------------
// Purpose - a brief statement of the program's function
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
	HashTable();
	~HashTable();
	bool isEmpty();
	int getSize();
	int getItemsAmount();
	void empty();
	bool remove(N* item);
	bool insert(N* item);
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
