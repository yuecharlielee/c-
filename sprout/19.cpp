#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        stack<int> a;
        queue<int> inputdata;
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int newdata;
            cin >> newdata;
            inputdata.push(newdata);
        }
        for (int j = 0; j < n; j++)
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
    return 0;
}