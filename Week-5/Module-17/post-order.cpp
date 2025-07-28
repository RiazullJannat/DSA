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
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->value << " ";
    inorder(root->right);
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
    inorder(root);
    return 0;
}