#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){

    Node* a = new Node();
    a->data = 10;
    a->next = NULL;

    Node* b = new Node();
    b->data = 15;
    b->next = a;

    Node* c = new Node();
    c->data = 20;
    c->next = b;

    cout<<c->data<<endl;
    cout<<c->next->data<<endl;
    cout<<c->next->next->data<<endl;

    return 0;
}