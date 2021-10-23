#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head;

void push(int d)
{
    Node *temp = new Node();
    temp->data = d;
    if (head == NULL)
        head = temp;
    else
        temp->next = head;
    head = temp;
}
void display(Node *node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    display(node->next);
}

void displayRev(Node *node)
{
    //can be done this way too
    if (node->next == NULL)
    {
        cout << node->data;
        return;
    }
    displayRev(node->next);
    cout << " " << node->data;
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    displayRev(head);
    cout << endl;
    display(head);

    return 0;
}