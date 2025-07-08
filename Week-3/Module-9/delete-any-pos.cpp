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
void delete_at_any_pos(Node *&head, Node *&tail, int index)
{
    Node *temp = head;
    for (int i = 1; i < index; i++)
    {
        if (temp->next == NULL)
        {
            cout << "invalid index " << i << " ";
            return;
        }
        temp = temp->next;
    }
    if (temp->prev == NULL && temp->next == NULL)
    {
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else if (temp->next == NULL)
    {
        tail = temp->prev;
        tail->next = NULL;
        delete temp;
    }
    else if (temp->prev == NULL)
    {
        head = head->next;
        head->prev = NULL;
        delete temp;
    }
    else
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }
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
    // Node *tail = new Node(20);
    // head->next = tail;
    // tail->prev = head;
    delete_at_any_pos(head, tail, 3);
    // delete_at_any_pos(head, tail, 1);
    print_forward(head);
    return 0;
}