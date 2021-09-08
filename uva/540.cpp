#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 1;
    while (cin >> n && n)
    {
        map<int, int> chinese;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            for (int j = 0; j < k; j++)
            {
                int num;
                cin >> num;
                chinese[num] = i;
            }
        }
        string query;
        queue<int> bigteam;
        queue<int> smallteam[1005];
        cout << "Scenario #" << count << "\n";
        while (cin >> query && query != "STOP")
        {
            if (query == "ENQUEUE")
            {
                int no;
                cin >> no;
                int teamnum;
                if (chinese.find(no) == chinese.end())
                {
                    chinese[no] = ++n;
                    teamnum = chinese[no];
                }
                else
                {
                    teamnum = chinese[no];
                }
                if (smallteam[teamnum].empty())
                {
                    bigteam.push(teamnum);
                }
                smallteam[teamnum].push(no);
            }
            if (query == "DEQUEUE")
            {
                int t = bigteam.front();
                if (!smallteam[t].empty())
                {
                    cout << smallteam[t].front() << "\n";
                    smallteam[t].pop();
                }
                if (smallteam[t].empty())
                {
                    bigteam.pop();
                }
            }
        }
        cout << "\n";
        count++;
    }

    return 0;
}