#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
};

int main()
{
    Node a, b, c, d;
    a.value = 10;
    a.next = &b;
    b.value = 20;
    b.next = &c;
    c.value = 30;
    c.next = &d;
    d.value = 40;
    d.next = NULL;
    cout << a.value << endl; //accessing value using nde;
    cout << a.next->value << endl;
    cout << a.next->next->value << endl;
    return 0;
}