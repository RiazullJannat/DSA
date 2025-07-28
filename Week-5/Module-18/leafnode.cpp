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
void printTree(Node *root)
{
    queue<Node *> tq;
    tq.push(root);
    while (!tq.empty())
    {
        Node *temp = tq.front();
        if (temp->left)
            tq.push(temp->left);
        if (temp->right)
            tq.push(temp->right);
        cout << temp->value << " ";
        tq.pop();
    }
}
int leaf_node(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int l = leaf_node(root->left);
    int r = leaf_node(root->right);
    return l + r;
}
int main()
{
    int val;
    cin >> val;
    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        int left, right;
        cin >> left >> right;
        if (left != -1)
        {
            Node *l = new Node(left);
            temp->left = l;
            q.push(l);
        }
        if (right != -1)
        {
            Node *r = new Node(right);
            temp->right = r;
            q.push(r);
        }
        q.pop();
    }
    cout << leaf_node(root);
    return 0;
}