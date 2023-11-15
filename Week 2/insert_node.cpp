
// When inserting a node into a linked list, 
// there are 3 cases to take into consideration:

// 1) Inserting a node at the beginning of the linked list

// 2) Inserting a node in the middle of the linked list

// 3)Inserting a node at the end of the linked list 

// To insert a node at the beginning, you simply need to 
// make the “next” field in the new node point to the 
// first node.


#include <iostream>

using namespace std;

class Node
{
public:
    char c;
    Node* next;

//constructor
Node(){ next = nullptr; c = ' ';}

//parametized constructor for singly linked
Node(char value){ c = value; next = nullptr;}

};

int main()
{

Node* ptrA = new Node('A');
Node* ptrB = new Node('B');
Node* ptrC = new Node('C');
Node* ptrD = new Node('D');

ptrA->next = ptrB;
ptrB->next = ptrC;
ptrC->next = ptrD;


//INSERT IN THE BEGINNING

//Create a new node that holds the new value
Node* ptrX = new Node('X');

ptrX->next = ptrA;



//****INSERT IN THE MIDDLE****

// When inserting a node between two nodes, 
// it’s very important to keep track of the order of insertion,
// otherwise we could lose our linked list and end up with dangling 
// pointers in the memory (which could cause run time error or a crash when 
// the program ends).


// Let’s assume we have 4 pointers, ptrA, ptrB, ptrC, and ptrD. 
//Each pointer points to a node that holds the latter ‘A’ ‘B’ ‘C’ and ‘D’,
// respectively. So ptrC points to a node that holds the value ‘C’ and so on. 
//Let’s assume ptrA points to ptrB and ptrB points to ptrC and ptrC points to ptrD.

// Now. Let’s assume we have a new node, 
//let’s call it ptrY that holds the letter ‘Y’.
// We want to insert ptrY between the nodes ptrB and ptrC. 
//Here are the steps:

// Make ptrX point to ptrC

// Make ptrB point to ptrY


Node* ptrY = new Node('Y');

// Let's assume we want to insert Y between B and C. 
// Make ptrY point to ptrC:

ptrY->next = ptrC;

// MAke ptrB point to ptrY:

ptrB->next = ptrY;


//****INSERT AT THE END****

// To insert a node at the end of a linked list, 
// you need to do the following:

// 1) Create a temporary pointer
Node* start;

// 2) Point to the first node
start = ptrA;

// 3) Loop through the linked list until your temporary pointer points to the 
// last node.
while(start->next != nullptr){
    cout << start->c;
    start=start->next;
}

// 4) Create the new node.
Node* ptrZ = new Node('Z');

// 5) Make your temporary pointer point to the new node
start->next = ptrZ;









return 0;
}