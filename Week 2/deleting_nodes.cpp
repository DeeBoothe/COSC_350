//*****DELETING NODES****

// In a linked list, we usually call the pointer that points to the first node "start". 
// The "start" pointer is the most important pointer in the linked list because if 
// that pointer is lost there is no way we can access the linked list. 
// Furthermore, the "start" pointer should never move to the next node. 
// If “start” moves to the next node, there is no way we can return to the previous node.

//!!!****REMEMBER****!!!
// We should never move the “start” pointer.

// Instead, we can create a temporary pointer, 
// have the temporary pointer point to the same node “start”
// points to, then do our work.



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

// When deleting a node into a linked list. 
// There are 3 cases to take into consideration:

// ***Deleting the first node in the linked list***
// To delete the first node in a linked list, 
// you can do the following:

// 1) Create a temporary pointer. Let’s name it ptr:
// (Assume a pointer name start points to the first node:-)
Node* start = ptrA;

// 2) Make the ptr point to start.
Node* ptr = start;

// 3) Move start to the next node.
start = start->next;

// 4) Delete ptr.
delete ptr;




// ***Deleting a node in the middle of the linked list***
// To delete a node between two nodes, 
//you can do the following:

// 1) Find the node you want to delete. 
//Have a temporary pointer, call it ptr, 
//point to that node.(ptrC)

Node* start = ptrA;

Node* ptr = start;
while (ptr->c != 'C')
{
    ptr = ptr->next;
}

// 2) Create another temporary pointer to point 
//to the node before ptr, name it ptr1

Node* ptr1 = start;
while (ptr1->next != ptr)
{
    ptr = ptr1->next;
}

// 3) Create another temporary pointer to point 
//to the node after the node ptr points to. 
//Name it ptr2

Node* ptr2 = ptr->next;

// 4) Make ptr1 point to ptr2

ptr1->next = ptr2;

// 5) Delete ptr
delete ptr;




// ***Deleting the last node in the linked list***

// To delete the last node in a linked list, 
// you can do the following:


// 1) Create a temporary pointer. Let’s name it ptr
//Node* start = ptrA;
Node* ptr = new Node();


// 2) Make the ptr point to start.
ptr->next = start;

// 3) Loop through the linked list until ptr points to the 
//last node (the node that points to nullptr)

while(ptr->next != nullptr)
{
    ptr = ptr->next;
}

//4)  Create a second temporary pointer. 
//Let’s name it ptr2 and Make ptr2 point to start
Node* ptr2 = start;


//5) Loop through the linked list until ptr2 points to the 
//node before ptr
while (ptr2->next != ptr)
{
    ptr2 = ptr2->next;
}


//6) Delete the node ptr points to.
delete ptr;

//7) Make the “next” of the node ptr2 to equal to nullptr.
ptr2->next = nullptr;



    return 0;
}