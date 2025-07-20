#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->value = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    void push(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        if (tail == NULL)
        {
            return;
        }
        if (tail == head)
        {
            head = NULL;
            tail = NULL;
            return;
        }
        tail = tail->prev;
        tail->next = NULL;
    }
    int top()
    {
        if (tail != NULL)
            return tail->value;
        return 0;
    }
    int size()
    {
        int sz = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            sz++;
            temp = temp->next;
        }
        return sz;
    }
    bool empty()
    {
        return head == NULL ? true : false;
    }
};
int main()
{
    myStack r;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        r.push(val);
    }
    while (!r.empty())
    {
        cout << r.top() << endl;
        r.pop();
    }
    return 0;
}