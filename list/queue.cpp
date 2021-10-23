#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *front;
Node *rear;

bool isEmpty()
{
    return front == rear;
}

void push()
{
    Node *temp = new Node();
    cout << "Enter data: ";
    cin >> temp->data;
    temp->next = NULL;
    if (front == NULL)
        front = temp;
    else
        rear->next = temp;
    rear = temp;
}
void pushAt()
{
    Node *temp = new Node();
    int pos;
    cout << "Enter index: ";
    cin >> pos;
    // if (pos == 0)
    //     return push();
    cout << "Enter data: ";
    cin >> temp->data;

    Node *traval = front;

    //get to the node thats before desired pos
    while (pos != 1)
    {
        traval = traval->next;
        pos--;
    }
    //point new node to node next to desired pos
    temp->next = traval->next;
    //point that node to new node
    traval->next = temp;
}
void pop()
{
    if(front ==  NULL){
        cout<<"\nempty queue!";
        return;
    }
    Node *temp = front;
    if (front == NULL)
    {
        cout << "\nunderflow";
        return;
    };
    front = front->next;
    free(temp);
}
void removeAt()
{
    if(front ==  NULL){
        cout<<"\nempty queue!";
        return;
    }
    int pos;
    cout << "Enter index: ";
    cin >> pos;
    int i = 0;
    Node *temp1 = front;
    //stop one node before desired node
    while (i != pos - 1)
    {
        temp1 = temp1->next;
        i++;
    }
    Node *temp2 = temp1->next;
    temp1->next = temp1->next->next;
    free(temp2);
}
void traverse()
{
    Node *temp = front;
    int i = 0;
    while (temp != NULL)
    {
        cout << temp->data << "(" << i << ")->";
        temp = temp->next;
        i++;
    }
    cout << "NULL";
}
void reverse()
{
    if(front ==  NULL){
        cout<<"\nempty queue!";
        return;
    }
    Node *curr = front;
    Node *next;
    Node *prev = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cout<<"\n next "<<next;
    }
    front = prev;

}

int main()
{
    int op;
    while (1)
    {
        cout << "\n1.push\t2.pop\t3.traverse\t4.push_at\t5.remove_at\t6.reverse\t7.exit:\t";
        cin >> op;
        if (op == 7)
            break;
        if (op == 1)
            push();
        if (op == 2)
            pop();
        if (op == 3)
            traverse();
        if (op == 4)
            pushAt();
        if (op == 5)
            removeAt();
        if (op == 6)
            reverse();
    }
    return 0;
}