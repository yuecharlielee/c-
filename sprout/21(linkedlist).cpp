#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *head, *tail;
};
int main()
{
    int n;
    cin >> n;
    vector<node *> pos;
    node *linkedlist = new node, *tmp;
    linkedlist->data = 1;
    linkedlist->head = nullptr;
    tmp = linkedlist;
    pos.push_back(linkedlist);
    for (int i = 2; i <= n; i++)
    {
        node *newnode = new node;
        newnode->data = i;
        tmp->tail = newnode;
        newnode->head = tmp;
        tmp = newnode;
        pos.push_back(tmp);
    }
    tmp->tail = nullptr;
    int m = 0;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int op, op_num;
        cin >> op >> op_num;
        if (op == 0)
        {
            if (pos[op_num - 1]->head == nullptr)
            {
                node *backward = pos[op_num - 1]->tail;
                backward->head = nullptr;
                node *tmp2 = linkedlist;
                linkedlist = backward;
                free(tmp2);
            }
            else if (pos[op_num - 1]->tail == nullptr)
            {
                node *forward = pos[n - 1]->head;
                forward->tail = nullptr;
                free(pos[n - 1]);
            }
            else
            {
                node *forward = pos[op_num - 1]->head;
                node *backward = pos[op_num - 1]->tail;
                forward->tail = backward;
                backward->head = forward;
                free(pos[op_num - 1]);
            }
        }
        else if (op == 1 && pos[op_num - 1]->head != nullptr)
        {
            node *forward = pos[op_num - 1]->head->head;
            node *backward = pos[op_num - 1]->tail;
            pos[op_num - 1]->tail = pos[op_num - 1]->head;
            pos[op_num - 1]->head = forward;
            pos[op_num - 1]->tail->head = pos[op_num - 1];
            if (forward != nullptr)
            {
                forward->tail = pos[op_num - 1];
            }
            else
            {
                linkedlist = pos[op_num - 1];
            }
            if (backward != nullptr)
            {
                backward->head = pos[op_num - 1]->tail;
            }
            pos[op_num - 1]->tail->tail = backward;
        }
    }
    while (linkedlist->tail != nullptr)
    {
        node *tmp2 = linkedlist;
        cout << linkedlist->data << " ";
        linkedlist = linkedlist->tail;
        free(tmp2);
    }
    cout << linkedlist->data << "\n";
    free(linkedlist);
    return 0;
}