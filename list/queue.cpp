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
    if (pos == 0)
        return push();
    cout << "Enter data: ";
    cin >> temp->data;

    Node *traval = front;

    //get to the node thats before desired pos
    while (pos != 1)
    {
        traval = traval->next;
    }
    //point new node to node next to desired pos
    temp->next = traval->next;
    //point that node to new node
    traval->next = temp;
}
void pop()
{
    Node *temp = front;
    if (front == NULL)
    {
        cout << "\nunderflow";
        return;
    };
    front = front->next;
    free(temp);
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

int main()
{
    int op;
    while (1)
    {
        cout << "\n1.push\t2.pop\t3.traverse\t4.push_at\t5.exit:\t";
        cin >> op;
        if (op == 5)
            break;
        if (op == 1)
            push();
        if (op == 2)
            pop();
        if (op == 3)
            traverse();
        if (op == 4)
            pushAt();
    }
    return 0;
}