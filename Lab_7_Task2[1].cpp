#include<iostream>
using namespace std;

struct node{
    int data;
    node*prev;
    node*next;
};

void insertatbeginning(node**head, int newdata){
    node*newnode=new node();
    newnode->data=newdata;
    newnode->prev=NULL;
    newnode->next=(*head);

    if(*head!=NULL){
        (*head)->prev=newnode;
    }
    *head=newnode;
}

void printforward(node*node){
    cout<<"Forward traversal: ";
    while(node!=NULL){
        cout<<node->data<<" -> ";
        node=node->next;
    }
    cout<<"NULL"<<endl;
}

void printreverse(node*node){
    if(node == NULL);

    while(node->next != NULL) {
        node = node->next;
    }

    cout<<"Reverse traversal: ";
    while(node != NULL){
        cout<<node->data<<" -> ";
        node = node->prev;
    }
    cout<<"NULL"<<endl;
}
void insertatend(node** head, int newdata) {
    node* newnode = new node();
    newnode->data = newdata;
    newnode->next = NULL;

    if (*head == NULL) {
        newnode->prev = NULL;
        *head = newnode;
        return;
    }

    node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;
}

int main() {
    node*head=NULL;

    insertatbeginning(&head, 10);
    insertatbeginning(&head, 20);
    insertatbeginning(&head, 30);
    
      insertatend(&head, 40);

    //printforward(head);   
    printreverse(head);   

    return 0;
}
