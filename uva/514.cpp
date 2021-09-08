#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    while (cin >> t && t != 0)
    {

        while (true)
        {
            queue<int> inputdata;
            stack<int> a;
            int temp;
            cin >> temp;
            if (temp == 0)
            {
                break;
            }
            else
            {
                inputdata.push(temp);
            }
            for (int j = 1; j < t; j++)
            {
                cin >> temp;
                inputdata.push(temp);
            }
            for (int j = 0; j < t; j++)
            {
                a.push(j + 1);
                while (!a.empty() && inputdata.front() == a.top())
                {
                    a.pop();
                    inputdata.pop();
                }
            }
            cout << (a.empty() ? "Yes\n" : "No\n");
        }
        cout << "\n";
    }

    return 0;
}