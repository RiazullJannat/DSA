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
class Myqueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        Node *newNode = new Node(val);
        sz++;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void pop()
    {
        if (head == NULL)
        {
            return;
        }
        sz--;
        if (head == tail)
        {
            head = NULL;
            tail = NULL;
            return;
        }
        Node *delNode = head;
        head = head->next;
        delete delNode;
    }
    int front()
    {
        if (head != NULL)
            return head->value;
        return -1;
    }
    int back()
    {
        if (tail != NULL)
            return tail->value;
        return -1;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};
int main()
{
    Myqueue r;
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
        cout << r.front() << endl;
        r.pop();
    }

    return 0;
}