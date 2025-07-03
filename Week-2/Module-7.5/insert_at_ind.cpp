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
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insert_to_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    return;
}
void insert_at_ind(Node *&head, int val, int ind)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < ind && ind != 0; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }
    if (ind == 0)
    {
        insert_to_head(head, val);
    }
    else
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }
    print_linked_list(head);
    return;
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
    int n;
    cin >> n;
    int ind, val;
    for (int i = 0; i < n; i++)
    {
        cin >> ind;
        cin >> val;
        insert_at_ind(head, val, ind);
    }
    return 0;
}