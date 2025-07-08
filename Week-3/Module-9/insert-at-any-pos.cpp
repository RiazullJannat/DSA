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
void insert_at_any_pos(Node *head, int ind, int val)
{
    Node *newNode = new Node(val);
    for (int i = 0; i < ind; i++)
    {
        head = head->next;
    }
    newNode->prev = head->prev;
    head->prev = newNode;
    newNode->prev->next = newNode;
    newNode->next = head;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = head;
    Node *temp = head;
    insert_at_any_pos(head, 1, 100);
    insert_at_any_pos(head, 1, 200);
    insert_at_any_pos(head, 2, 400);
    print_forward(head);
    return 0;
}