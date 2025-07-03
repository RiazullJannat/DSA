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
void check_2_lists_are_same_length(Node *head, Node *tail)
{
    vector<int> map;
    for (int i = 0; i < 2; i++)
    {
        int value;
        int len = 0;
        while (true)
        {
            cin >> value;
            if (value == -1)
            {
                break;
            }
            insert_to_tail(head, tail, value);
            len++;
        }
        map.push_back(len);
    }
    map[0] == map[1] ? cout << "YES" : cout << "NO";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    check_2_lists_are_same_length(head, tail);
    return 0;
}