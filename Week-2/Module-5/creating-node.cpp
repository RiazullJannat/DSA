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
    Node a(10), b(20), c(30), d(40);
    
    cout << a.value << endl; // accessing value using nde;
    return 0;
}