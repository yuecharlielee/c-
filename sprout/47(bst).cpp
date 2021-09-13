#include <bits/stdc++.h>
using namespace std;
struct treenode
{
    int data;
    treenode *leftchild, *rightchild, *parent_node;
};
treenode *createnode(int x, treenode *parent_node)
{
    treenode *newnode = new treenode;
    newnode->data = x;
    newnode->leftchild = nullptr;
    newnode->rightchild = nullptr;
    newnode->parent_node = parent_node;
    return newnode;
}
void delete_node(treenode *root, int n)
{
    if (n < root->data)
    {
        delete_node(root->leftchild, n);
    }
    else if (n > root->data)
    {
        delete_node(root->rightchild, n);
    }
    else{
        if(root->leftchild==nullptr && root->rightchild==nullptr){
            if(root->parent_node->rightchild==nullptr){
                delete (root);
                root->parent_node->leftchild = nullptr;
            }
            else{
                delete (root);
                root->parent_node->rightchild = nullptr;
            }
        }
        else if(root->leftchild!=nullptr && root->rightchild==nullptr){
            if(root->parent_node->leftchild)
        }

    }
}
void insert_node(treenode *&root, int n)
{
    if (n < root->data)
    {
        if (root->leftchild == nullptr)
        {
            root->leftchild = createnode(n, root);
            return;
        }
        else
        {
            insert_node(root->leftchild, n);
        }
    }
    else if (n > root->data)
    {
        if (root->rightchild == nullptr)
        {
            root->rightchild = createnode(n, root);
            return;
        }
        else
        {
            insert_node(root->rightchild, n);
        }
    }
}
void search(treenode *root, int n, int *ans1, int *ans2, int *distance)
{
    if (abs(n - root->data) < *distance || *distance == -1)
    {
        *distance = abs(n - root->data);
        *ans1 = root->data;
        *ans2 = -2000000000;
    }
    else if (abs(n - root->data) == *distance)
    {
        *ans2 = root->data;
    }
    if (n < root->data && root->leftchild != nullptr)
    {
        search(root->leftchild, n, ans1, ans2, distance);
    }
    else if (n > root->data && root->rightchild != nullptr)
    {
        search(root->rightchild, n, ans1, ans2, distance);
    }
}
void inorder(treenode *root)
{
    if (root != nullptr)
    {
        inorder(root->leftchild);
        cout << root->data << " ";
        if(root->parent_node!=nullptr){
            cout << root->parent_node->data;
        }
        cout<< "\n";
        inorder(root->rightchild);
    }
}
int main()
{
    int n, x;
    string q;
    cin >> n;
    n--;
    cin >> q >> x;
    treenode *root = createnode(x, nullptr);
    while (n--)
    {
        cin >> q >> x;
        if (q == "insert")
        {
            insert_node(root, x);
        }
        else if (q == "query")
        {
            int distance = -1;
            int ans1 = -2000000000, ans2 = -2000000000;
            search(root, x, &ans1, &ans2, &distance);
            if (ans1 > ans2 && ans2 != -2000000000)
            {
                swap(ans1, ans2);
            }
            if (ans2 != -2000000000)
            {
                cout << ans1 << " " << ans2 << "\n";
            }
            else
            {
                cout << ans1 << "\n";
            }
        }
        else if (q == "delete")
        {
            delete_node(root, n);
        }
    }
    return 0;
}
