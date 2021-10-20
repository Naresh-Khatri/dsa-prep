#include<iostream>

using namespace std;
// class Node {
//     public:
//     int data;
//     Node* next;

//     void Node(int d){
//         data = d;
//     }
// }
struct Node{
    int data;
    Node *next;
}*head;

void push(){
    Node* temp = new Node();
    cout<<"\nData: ";
    cin>>temp->data;
    if(head == NULL)
        temp->next = NULL;
    else
        temp->next = head;
    head = temp;

}
void pop(){
    Node* temp;
    temp = head;
    if(head == NULL){
        cout<<"\nUnderflow";
        return;
    }
    cout<<"\nPopped "<<head->data;
    head = head->next;
    free(temp);
}

void traverse(){
    Node* temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
    
int main(){

    int op;

    while(1){
        cout<<"\n1. push\t2. pop\t3. traverse\t4. exit:\n";
        cin>>op;
        if(op == 4) break;
        if(op == 1) push();
        if(op == 2) pop();
        if(op == 3) traverse();
    }
    return 0;
}