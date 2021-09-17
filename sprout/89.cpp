#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)//先作吃最慢的
    {
        if (n == 0)
        {
            break;
        }
        int c, e, t = 0, r = 0;
        priority_queue<pair<int, int>> data;
        for (int i = 0; i < n; i++)
        {
            cin >> c >> e;
            data.push(make_pair(e,c));
        }
        while (!data.empty())
        {
            t += data.top().second;
            r = max(r, t + data.top().first);//可能吃完的時候還在做 所以取大的
            data.pop();
        }
        cout << r << "\n";
    }
    return 0;
}