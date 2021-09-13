#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> astack;
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int operte;
        cin >> operte;
        if (operte == 2)
        {
            if (astack.empty())
            {
                cout << "empty!\n";
            }
            else
            {
                cout << astack.top() << "\n";
                astack.pop();
            }
        }
        else
        {
            int data = 0;
            cin >> data;
            astack.push(data);
        }
    }
    return 0;
}