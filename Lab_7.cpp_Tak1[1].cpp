#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

void insertAttheBeginning(Node** head, int newData)
{

    Node* newNode = new Node();
    newNode->data = newData;
    newNode->prev = nullptr;  
    newNode->next = (*head);

    if (*head != nullptr)
    {
        (*head)->prev = newNode;
    }

    *head = newNode;
}

void printForward(Node* node) 
{
    cout << "Forward Traversal: ";
    while (node != nullptr) 
    {
        cout << node->data << " -> ";
        node = node->next;
    }

    cout << "Null" << endl;
}

int main()
{
    Node* head = nullptr;  

    insertAttheBeginning(&head, 10);
    insertAttheBeginning(&head, 20);
    insertAttheBeginning(&head, 30);


    printForward(head);
    
    return 0;
}

