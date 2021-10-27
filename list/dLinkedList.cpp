#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};
Node *head;

void push(int d)
{
    Node *temp = new Node();
    temp->data = d;
    if (head != NULL){
        temp->prev = NULL;
        temp->next = head;
    }
    head = temp;
}

void display(){
    Node *temp = head;
    // cout<<temp->prev;
    while(temp != NULL){
        cout<<temp->prev<<"<-"<<temp->data<<"->"<<temp->next;
        temp = temp->next;
    }    
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    return 0;
}