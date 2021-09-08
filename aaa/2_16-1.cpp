#include <bits/stdc++.h>
using namespace std;
int main()
{
    int queuea[5], queue_head_pointer = 0, queue_tail_pointer = 0, operate;
    cout << "put or get value, 1 for put and 2 for get:";
    while (true)
    {
        int new_num;
        cin >> operate;
        if (operate == 1)
        {
            if (queue_tail_pointer >= 5)
            {
                cout << "Error! Stack is full.\n";
                cout << "Queue contents are:";
                for (int i = queue_head_pointer; i < queue_tail_pointer; i++)
                {
                    cout << queuea[i] << " ";
                }
                cout << "\nHead pointer is " << &queuea[queue_head_pointer] << " and tail pointer is " << &queuea[queue_tail_pointer] << "\n";
            }
            else
            {
                cin >> new_num;
                queuea[queue_tail_pointer] = new_num;
                queue_tail_pointer++;
                cout << "Queue contents are:";
                for (int i = queue_head_pointer; i < queue_tail_pointer; i++)
                {
                    cout << queuea[i] << " ";
                }
                cout << "\nHead pointer is" << &queuea[queue_head_pointer] << " and tail pointer is " << &queuea[queue_tail_pointer] << "\n";
            }
        }
        else if (operate == -1)
        {
            break;
        }
        else if (operate == 2)
        {
            if (queue_head_pointer == queue_tail_pointer)
            {
                cout << "Error, queue is empty.\n";
                cout << "Head pointer is" << &queuea[queue_head_pointer] << " and tail pointer is " << &queuea[queue_tail_pointer] << "\n";
            }
            else{
                 cout << "Get value: " << queuea[queue_head_pointer] << "\n";
                queue_head_pointer++;
                cout << "Queue contents are:";
                for (int i = queue_head_pointer; i < queue_tail_pointer; i++)
                {
                    cout << queuea[i] << " ";
                }
                cout << "\nHead pointer is" << &queuea[queue_head_pointer] << " and tail pointer is " << &queuea[queue_tail_pointer] << "\n";
            }
        }
        cout << "put or get value, 1 for put and 2 for get:";
    }
    system("PAUSE");
    return 0;
}