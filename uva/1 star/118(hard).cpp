#include <bits/stdc++.h>

using namespace std;
int main()
{
    int x, y;
    vector<bool> ans(55, false);
    vector<vector<bool>> a(55, ans);
    vector<pair<int, int>> dis;
    pair<int, int> n, e, s, w;
    n.first = 0;
    n.second = 1;

    e.first = 1;
    e.second = 0;

    s.first = 0;
    s.second = -1;

    w.first = -1;
    w.second = 0;

    dis.push_back(n);
    dis.push_back(e);
    dis.push_back(s);
    dis.push_back(w);

    vector<char> dir = {'N', 'E', 'S', 'W'};
    cin >> x >> y;

    int robotx, roboty;
    string robotf, ins;
    while (cin >> robotx >> roboty >> robotf)
    {
        bool lost = false;
        int d;
        if (robotf == "N")
        {
            d = 0;
        }
        else if (robotf == "E")
        {
            d = 1;
        }
        else if (robotf == "S")
        {
            d = 2;
        }
        else
        {
            d = 3;
        }
        cin.ignore();
        getline(cin, ins);
        for (int i = 0; i < ins.size()&& !lost; i++)
        {
            if (ins[i] == 'L')
            {
                d = (d - 1 + 4) % 4;
            }
            else if (ins[i] == 'R')
            {
                d = (d + 1) % 4;
            }
            else if (ins[i] == 'F')
            {
                robotx += dis[d].first;
                roboty += dis[d].second;
                if (robotx > x || robotx < 0 || roboty > y || roboty < 0)
                {
                    robotx -= dis[d].first;
                    roboty -= dis[d].second;
                    if (!a[robotx][roboty])
                    {
                        a[robotx][roboty] = true;
                        lost = true;
                    }
                }
            }
        }
        cout << robotx << " " << roboty << " " << dir[d];
        if (lost)
        {
            cout << " LOST"
                 << "\n";
        }
        else
        {
            cout << "\n";
        }
    }
    system("PAUSE");
    return 0;
}