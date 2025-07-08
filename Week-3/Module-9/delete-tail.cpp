#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->value = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void print_forward(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}
void delete_tail(Node *&head, Node *&tail)
{
    Node *delNode = tail;
    tail = tail->prev;
    delete delNode;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;
    Node *temp = head;
    delete_tail(head, tail);
    delete_tail(head, tail);
    delete_tail(head, tail);
    print_forward(head);
    return 0;
}