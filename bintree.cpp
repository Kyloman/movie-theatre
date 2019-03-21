// ----------------------- bintree.cpp ----------------------------------------
// Jonathan Acoltzi Rojas, CSS 343 C
// Jan 26, 2019
// Date of Last Modification 3/20/19
// --------------------------------------------------------------------------
// Purpose - to create a binary search tree. That can be made into an array
// and vise versa. The saves a nodeData that is a string class.
// --------------------------------------------------------------------------
// All except get height can be assumed to be a binary search tree.
// -----------------------------------------------------------------------------
#include "bintree.h"
// --------------------------Operator <<----------------------------------------
// Description:prints tree in order.
// ----------------------------------------------------------------------------
ostream &operator<<( ostream &out, const BinTree &rhs )
{
    rhs.inorderHelper(rhs.root);
    cout<<endl;
    return out;
}// end of operator<<

// --------------------------default Contructor------------------------------
// Description: creeates tree with NULL root
// ----------------------------------------------------------------------------
BinTree::BinTree()
{
    root = NULL;
} // end of constuctor

// --------------------------Contructor(copy)----------------------------------
// Description:creates a tree class that is a deap copy of another tree class
// ----------------------------------------------------------------------------
//BinTree::BinTree(const BinTree &rhs)
//{
//    root = NULL;
//    *this = rhs;
//}// end of copy constructor

// --------------------------destructor---------------------------------------
// Description:deletes the tree when class is deleted leaves root = NULL.
// ----------------------------------------------------------------------------
BinTree::~BinTree()
{
    makeEmpty();
} // end of destructor

// --------------------------isEmpty---------------------------------------
// Description: checks if tree is empty true if yes.
// ----------------------------------------------------------------------------
bool BinTree:: isEmpty() const                 // true if tree is empty, otherwise false
{
    
    return (root == NULL);
} // end of isEmpty

// --------------------------makeEmpty---------------------------------------
// Description: makes the tree empty and leave root at NULL
// ----------------------------------------------------------------------------
void BinTree::makeEmpty()                 // make the tree empty so isEmpty returns true
{
    Node *current = root;
    makeEmptyHelper(root);
    root = NULL;
} // end of makeEmpty

// --------------------------operator=---------------------------------------
// Description: copies one tree to another. lhs will now equal right
// hand side.
// ----------------------------------------------------------------------------
//BinTree& BinTree::operator=(const BinTree &rhs)
//{
//    if(*this != rhs)
//    {
//        makeEmpty();
//        
//        copyHelper(root, rhs.root);
//    }
//    return *this;
//} // end of operator=

// --------------------------operator==---------------------------------------
// Description: checks if two trees are equal returns true if yes.
// ----------------------------------------------------------------------------
bool BinTree::operator==(const BinTree &rhs) const
{
    return equalityHelper(root, rhs.root);
} // end of operator==

// --------------------------operator!=---------------------------------------
// Description: checks if two trees are not equal returns true if not equual.
// ------------------------------------------------------------------------
bool BinTree::operator!=(const BinTree &rhs) const
{

    return !(equalityHelper(root, rhs.root));
    
} // end of operator!=

// --------------------------insert(Movie)-----------------------------------
// Description: adds a Movie to the tree. returns true if it inserted
// no if already one with same value.
// ----------------------------------------------------------------------------
bool BinTree::insert(Movie *p)
{
    Movie *temp = nullptr;
    if(retrieve( p, temp) == true)
    {
        temp = NULL;
        return false;
    }
    insertHelper(root, p);
    return true;
} // end of insert

// --------------------------:retrieve(Movie , Movie) -----------------------------------
// Description: looks for a Movie if found the stock is increased
// ----------------------------------------------------------------------------
//TODO: ADD FUNCTIONALITY TO INCREASE STOCK HERE
bool BinTree::retrieve(Movie* tree, Movie *p) const
{
    Node *current = root;
    
    while(current != NULL )
        if(*current->data > *tree)
            current = current->left;
        else if(*current->data < *tree)
            current = current->right;
        else if(*current->data == *tree)
        {
            p = current->data;
            return true;
        }

    return false;
} // end of retrieve

// --------------------------:getHeight(Movie) -----------------------------------
// Description: returns height of a Movie
// ----------------------------------------------------------------------------
int BinTree::getHeight(const Movie &data)const
{
    Node *current = root;
    int i = 0;
    bool found = false;
    int max = 0;
    getHeightHelper(data, current, i, max, found);
    return max;
} // end of getHeight

// --------------------------:bstreeToArray(Movie* array[]) -----------------------------------
// Description: turns tree to array and deletes tree.
// ----------------------------------------------------------------------------
void BinTree::bstreeToArray(Movie* array[])
{
    int i = 0;
    treeToArrayHelper( root, array, i);
    makeEmpty();
    
} // end of bstreeToArray

// --------------------------:arrayToBSTree(Movie* arr[]) -----------------------------------
// Description: turns array to tree. array left with NULL values
// ----------------------------------------------------------------------------
void BinTree::arrayToBSTree(Movie* arr[])
{
    int i = 0;
    int mid = 0;
    
    makeEmpty();
    while(arr[i] != NULL)
        i++;
    
    
    mid = i/2 - 1;
    if(i % 2 != 0)
        mid++;
        
    arrayToBSTreeHelper(arr, mid, mid/2);
    
} // end of arrayToBSTree




//------------------------- displaySideways ---------------------------------
// Displays a binary tree as though you are viewing it from the side;
// hard coded displaying to standard output.
// Preconditions: NONE
// Postconditions: BinTree remains unchanged.
void BinTree::displaySideways() const
{
    sideways(root, 0);
} // end of displaySideways

//---------------------------- Sideways -------------------------------------
// Helper method for displaySideways
// Preconditions: NONE
// Postconditions: BinTree remains unchanged.
void BinTree::sideways(Node* current, int level) const
{
    if (current != NULL) {
        level++;
        sideways(current->right, level);
        
        // indent for readability, 4 spaces per depth level
        for (int i = level; i >= 0; i--) {
            cout << "    ";
        }
        
        cout << current->data->toString() << endl;        // display information of object
        sideways(current->left, level);
    }
} // end of sideways

// --------------------------:inorderHelper(Node* current) -----------------------------------
// Description: prints in order recursivly
// ----------------------------------------------------------------------------
void BinTree::inorderHelper(Node* current) const
{
    if(current != NULL)
    {
        if(current->left != NULL)
            inorderHelper(current->left);
        cout << current->data->toString() <<" " << endl;
        if(current->right != NULL)
            inorderHelper(current->right);
    }
} // end of inorderHelper

// --------------------------:insertHelper -----------------------------------
// Description: recursivly inserts value where needed
// ----------------------------------------------------------------------------
void BinTree::insertHelper(Node* &current, Movie* p)
{
    if(current == NULL)
    {
        delete current;
        current = new Node;
        current->data = p;
        current->left = NULL;
        current->right = NULL;
    }
    else if(*current->data < *p)
        insertHelper(current->right, p);
	else 
		insertHelper(current->left, p);
    
} // end of insertHelper

// --------------------------:copyHelper -----------------------------------
// Description: copies a tree recursivly. leaves tree with one value
// per recursion if rhs nodedata is not NULL
// ----------------------------------------------------------------------------
//void BinTree::copyHelper(Node* &copied, Node* rhs)
//{
//    if(rhs == NULL)
//    return;
//
//    if(copied == NULL)
//    {
//
//        copied = new Node(*rhs);
//        Movie *temp = new Movie(*rhs->data);
//        copied->data = temp;
//        copied->left = NULL;
//        copied->right = NULL;
//    }
//
//
//
//    if(rhs->left != NULL)
//        copyHelper(copied->left, rhs->left);
//    if(rhs->right != NULL)
//        copyHelper(copied->right, rhs->right);
//
//} // end of copyHelper

// --------------------------:treeToArrayHelper -----------------------------------
// Description: adds vaue to array deletes value frome tree. recursive
// ---------------------------------------------------------------------------
void BinTree::treeToArrayHelper(Node* &current, Movie* array[], int &i )
{
    if(current != NULL)
    {
        if(current->left != NULL)
        {
            treeToArrayHelper(current->left, array, i);
        }
        array[i] = current->data;
        i++;
        if(current->right != NULL)
        {
            treeToArrayHelper(current->right, array, i);
        }

        delete current;
        current = NULL;
    }
} // end of treeToArrayHelper

// --------------------------:arrayToBSTreeHelper -----------------------------------
// Description: adds value to tre deletes value frome array. recursive
// leave array with NULL
// ----------------------------------------------------------------------------
void BinTree::arrayToBSTreeHelper(Movie* arr[], int mid, int size)
{
    
    if(arr[mid] != NULL && mid >= 0 )
    {
        Movie *newData = arr[mid];
        insert(newData);
        arr[mid] = NULL;
        arrayToBSTreeHelper(arr, mid - size -1, size/2);
        arrayToBSTreeHelper(arr, mid +  size + 1 , size/2);
    }
    
} // end of arrayToBSTreeHelper

// --------------------------:makeEmptyHelper -----------------------------------
// Description: empty tree revursively
// ----------------------------------------------------------------------------
void BinTree::makeEmptyHelper(Node* &current)
{
    if(current != NULL)
    {
        makeEmptyHelper(current->left);
        makeEmptyHelper(current->right);

        if(current->data != NULL)
        {
            cout<< current->data->toString() << " ";
            delete current->data;
            current->data = NULL;
        }
        
        delete current;
        current = NULL;
    }
    
} // end of makeEmptyHelper

// --------------------------:getHeightHelper -----------------------------------
// Description: looks for height counts down to height
// ----------------------------------------------------------------------------
void BinTree::getHeightHelper(const Movie &data, Node* current, int &i, int &max, bool found) const
{
    int temp = i;
    if(current != NULL && i != -1)
    {
        if(*current->data == data)
            found = true;
        
        if(found)
        {
            i++;
            temp++;
        }
        if(i > max)
            max = i;
        
        if(current->left != NULL)
            getHeightHelper(data, current->left, i, max, found);
        
        i = temp;
        if(current->right != NULL)
            getHeightHelper(data, current->right, i, max, found);
        
        i = temp;
       
        if(*current->data == data)
            i = -1;
    }
} // end of getHeightHelper

// --------------------------:equalityHelper -----------------------------------
// Description: looks to see if Node data is equal. recusrivly checks all tree
// ----------------------------------------------------------------------------
bool BinTree::equalityHelper(Node* lhs, Node* rhs)const
{
    bool equal1;
    bool equal2;
    bool equal3;
    if(lhs == NULL && rhs == NULL)
        return true;
    if(lhs == NULL || rhs == NULL)
        return false;

    equal1 = equalityHelper(lhs->left, rhs->left);
    equal2 = equalityHelper(lhs->left, rhs->left);
    equal3 = *lhs->data == *rhs->data;

    return equal1 && equal2 & equal3;
} // end of equalityHelper
