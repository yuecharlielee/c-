#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node *left, *right;
};
node *createnode(int x)
{
    node *newnode = new node;
    newnode->val = x;
    newnode->left = nullptr;
    newnode->right = nullptr;
    return newnode;
}
void insertnode(node *&root, int x)
{

    if (x < root->val)
    {
        if (root->left == nullptr)
        {
            root->left = createnode(x);
            return;
        }
        else
        {
            insertnode(root->left, x);
        }
    }
    else if (x > root->val)
    {
        if (root->right == nullptr)
        {
            root->right = createnode(x);
            return;
        }
        else
        {
            insertnode(root->right, x);
        }
    }
}
void preorder(node *root)
{
    if (root != nullptr)
    {
        cout << root->val << "\n";
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(node *root)
{
    if (root != nullptr)
    {
        inorder(root->left);
        cout << root->val << "\n";
        inorder(root->right);
    }
}
void postorder(node *root)
{
    if (root != nullptr)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->val << "\n";
    }
}
int main()
{
    node *root = new node;
    int x;
    root->left = nullptr;
    root->right = nullptr;
    cin >> x;
    root->val = x;
    while (cin >> x)
    {
        insertnode(root, x);
    }

    postorder(root);
    return 0;
}
