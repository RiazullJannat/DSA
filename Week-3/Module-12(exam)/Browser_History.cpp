#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string value;
    Node *prev;
    Node *next;
    Node(string val)
    {
        this->value = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void print_forward(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *temp = head;
    string val;
    while (true)
    {
        cin >> val;
        if (val == "end")
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int flag = 0;
        string command;
        cin >> command;
        if (command == "visit")
        {
            cin >> command;
            Node *temp2 = temp;
            temp = head;
            while (temp != NULL)
            {
                if (temp->value == command)
                {
                    flag = 1;
                    break;
                }
                temp = temp->next;
            }
            if (flag == 0)
            {
                cout << "Not Available" << endl;
                temp = temp2;
            }
            else
            {
                cout << command << endl;
            }
        }
        else if (command == "next")
        {
            if (temp != NULL && temp->next != NULL)
            {
                cout << temp->next->value << endl;
                temp = temp->next;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (temp != NULL && temp->prev != NULL)
            {
                cout << temp->prev->value << endl;
                temp = temp->prev;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}