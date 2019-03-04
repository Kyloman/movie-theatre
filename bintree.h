// ----------------------- bintree.h ----------------------------------------
// Jonathan Acoltzi Rojas, CSS 343 C
// Jan 26, 2019
// Feb 3, 2019
// --------------------------------------------------------------------------
// Purpose - to create a binary search tree. That can be made into an array
// and vise versa. The saves a nodeData that is a string class.
// --------------------------------------------------------------------------
// All except get height can be assumed to be a binary search tree.
// -----------------------------------------------------------------------------

#ifndef bintree_h
#define bintree_h
#include "club.h"
#include "customer.h"

class BinTree {                // you add class/method comments and assumptions
    // --------------------------Operator <<----------------------------------------
    // Description:prints tree in order.
    // ----------------------------------------------------------------------------
    friend ostream &operator<<( ostream &out, const BinTree &rhs );
public:
    // --------------------------default Contructor------------------------------
    // Description: creeates tree with NULL root
    // ----------------------------------------------------------------------------
    BinTree();                                // constructor
    // --------------------------Contructor(copy)----------------------------------
    // Description:creates a tree class that is a deap copy of another tree class
    // ----------------------------------------------------------------------------
    BinTree(const BinTree &);                // copy constructor
    // --------------------------destructor---------------------------------------
    // Description:deletes the tree when class is deleted leaves root = NULL.
    // ----------------------------------------------------------------------------
    ~BinTree();                                // destructor, calls makeEmpty
    // --------------------------isEmpty---------------------------------------
    // Description: checks if tree is empty true if yes.
    // ----------------------------------------------------------------------------
    bool isEmpty() const;                    // true if tree is empty, otherwise false
    // --------------------------makeEmpty---------------------------------------
    // Description: makes the tree empty and leave root at NULL
    // -------
    void makeEmpty();                        // make the tree empty so isEmpty returns true
    
    BinTree& operator=(const BinTree &);
    // --------------------------operator=---------------------------------------
    // Description: copies one tree to another. lhs will now equal right
    // hand side.
    // ----------------------------------------------------------------------------
    bool operator==(const BinTree &) const;
    bool operator!=(const BinTree &) const;
    bool insert(NodeData*);
    bool retrieve(NodeData, NodeData*) const;
    void displaySideways() const;            // provided below, displays the tree sideways
    int getHeight (const NodeData &) const;
    void bstreeToArray(NodeData* []);
    void arrayToBSTree(NodeData* []);
    
private:
    struct Node {
        Customer cust;                        // pointer to data object
        Node* left;                            // left subtree pointer
        Node* right;                        // right subtree pointer
    };
    Node* root;                                // root of the tree
    
    // utility functions
    void insertHelper(Node* & , NodeData* );
    void copyHelper( Node* &, Node* );
    void inorderHelper(Node*  ) const;
    void sideways(Node*, int) const;            // provided below, helper for displaySideways()
    void treeToArrayHelper(Node* &, NodeData* [], int &);
    void arrayToBSTreeHelper(NodeData* [], int, int);
    void makeEmptyHelper(Node* &);
    void getHeightHelper(const NodeData &data, Node* current, int &i, int &max, bool found) const;
    bool equalityHelper( Node* ,  Node* )const;
    
};

#endif /* bintree_h */
