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
int main()
{
    Node *head = new Node(10);
    Node *b = new Node(20);
    head->next = b;
    cout << head->value << endl;
    cout << head->next->value << endl;
    return 0;
}