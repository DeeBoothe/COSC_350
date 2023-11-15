#include <iostream>

using namespace std;

// To loop through a linked list, you need to start from the first node. 
// Once you have a pointer pointing to the first node, 
// you want to process that node (print its value) and 
// then move to the next node. 
// You keep processing the node and moving to the next 
// node until your pointer is equal to nullptr.

class Node
{
public:
    char c;
    Node* next;
    Node* prev;

//constructor
Node(){ next = prev = nullptr; c = ' ';}

//parametized constructor for singly linked
//Node(char value){ c = value; next = nullptr;}

//parametized constructor for doubly linked
Node(char value){ c = value; next = nullptr; prev = nullptr;}

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
    

    Node* start;
    start = ptrA;


    while(start != nullptr)
    {
        cout << start->c << " ";
        start = start->next;

    }

    return 0;

}
