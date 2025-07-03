#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};
void insert_to_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
void max_in_linkedList(Node *head)
{
    int max = head->value;
    while (head != NULL)
    {
        if (max < head->value)
        {
            max = head->value;
        }
        head = head->next;
    }
    cout << max << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_to_tail(head, tail, value);
    }
    max_in_linkedList(head);
    return 0;
}