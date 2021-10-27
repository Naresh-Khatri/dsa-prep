#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head;

void display(Node *node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    display(node->next);
}

void push(int d)
{
    Node *temp = new Node();
    temp->data = d;
    if (head != NULL)
        temp->next = head;
    head = temp;
}
Node *rev(Node *node)
{
    if (node->next == NULL)
    {
        head = node;
        return node;
    }
    Node *temp = rev(node->next);

    temp->next = node;
    node->next = NULL;
} 

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display(head);
    rev(head);
    cout<<endl;
    display(head);
    return 0;
}