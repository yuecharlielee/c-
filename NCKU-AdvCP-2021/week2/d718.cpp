#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, count = 1;
    while (cin >> n)
    {
        map<int, int> findqueue;
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            while (m--)
            {
                int a;
                cin >> a;
                findqueue[a] = i;
            }
        }
        string op;
        queue<int> big, small[5000];
        cout << "Line #" << count++ << "\n";
        while (cin >> op && op != "STOP")
        {
            if (op == "ENQUEUE")
            {
                int num, teamnum;
                cin >> num;
                if (findqueue.find(num) == findqueue.end())
                {
                    findqueue[num] = ++n;
                    teamnum = n;
                }
                else
                {
                    teamnum = findqueue[num];
                }
                if (small[teamnum].empty())
                {
                    big.push(teamnum);
                }
                small[teamnum].push(num);
            }
            if (op == "DEQUEUE")
            {
                int teamnum = big.front();
                if (!small[teamnum].empty())
                {
                    cout << small[teamnum].front() << "\n";
                    small[teamnum].pop();
                }
                if (small[teamnum].empty())
                {
                    big.pop();
                }
            }
        }
    }
    return 0;
}