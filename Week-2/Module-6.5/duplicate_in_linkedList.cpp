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
void duplicate_value(Node *head)
{
    string flag = "NO";
    for (Node *tmp = head; tmp->next != NULL; tmp = tmp->next)
    {
        for (Node *tem2 = tmp->next; tem2 != NULL; tem2 = tem2->next)
        {
            if (tmp->value == tem2->value)
            {
                flag = "YES";
            }
        }
    }
    cout << flag << endl;
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
    duplicate_value(head);
    return 0;
}