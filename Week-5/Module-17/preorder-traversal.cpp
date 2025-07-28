#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->value = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void preorder(Node *root)
{
    if (root == NULL)
        return;
    preorder(root->left);
    preorder(root->right);
    cout << root->value << " ";
}
int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    root->left = a;
    a->left = c;
    root->right = b;
    b->left = d;
    b->right = e;
    preorder(root);
    return 0;
}