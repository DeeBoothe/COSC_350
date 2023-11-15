#include <iostream>

using namespace std;

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

int main(){
    Node* ptrA = new Node('A');
    Node* ptrB = new Node('B');

    ptrA->next = ptrB;
    ptrB->prev = ptrA;

    cout << ptrA->c << endl;

    cout << ptrB->c << endl;
    //Singly linked
    cout << ptrA->next->c << endl;

    //Doubly linked 
    cout << ptrB->prev->c << endl;


return 0;
}