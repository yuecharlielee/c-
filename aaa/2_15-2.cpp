#include <bits/stdc++.h>
using namespace std;
int main()
{
    int stacka[5], stack_pointer = 0, operate;
    cout << "Push or pop value, 1 for push and 2 for pop:";
    cin >> operate;
    while (true)
    {
        int new_num;
        cin >> operate;
        if (operate == 1)
        {
            cin >> new_num;
        }
        if (operate == -1)
        {
            break;
        }
        if (operate == 1 && stack_pointer >= 5)
        {
            cout << "error! Stack is full.\n";
        }
        else if (operate == 2 && stack_pointer == 5)
        {
            cout << "error! Stack is null.\n";
        }
        else
        {
            if (operate == 1)
            {
                stacka[stack_pointer] = new_num;
                stack_pointer++;
                cout << "Stack contents: ";
                for (int i = 0; i < stack_pointer; i++)
                {
                    cout << stacka[i] << " ";
                }
                cout << "stack pointer: " << stack_pointer << "\n";
            }
            if (operate == 2)
            {
                cout << "pop value: " << stacka[stack_pointer - 1] << "\n";
                stack_pointer--;
                cout << "Stack contents: ";
                for (int i = 0; i < stack_pointer; i++)
                {
                    cout << stacka[i] << " ";
                }
                cout << "stack pointer: " << stack_pointer << "\n";
            }
        }
    }
    system("PAUSE");
    return 0;
}