// A company wants to create an automated system that reads input from a file
// and creates a linked list based on the commands in the file. 
//The file contains the following structure:

// Action (Required): This is a character that states which action to be done
// on the linked list

// Data (optional): This is a one character/digit value that will be processed.

// Action Character
// An action character can be one of the following:

// A: Adds a character to the linked list. 
// The characters to be added follows this command (the Data part)

// B: This moves the "current" cursor in the linked list back one character

// D: This deletes the node "current" is pointing to.


// Data
// Data is a one character/digit value. 
// This item is optional when the Action Character is B or D 
// but is required if the Action Character is A.


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

int main()
{

return 0;
}