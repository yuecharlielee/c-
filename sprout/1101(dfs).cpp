#include <bits/stdc++.h>
using namespace std;
vector<int> colors;
vector<vector<int>> edge;

bool coloring(int u, int color)
{
    colors[u] = color;
    for (int i : edge[u])
    {
        if (colors[i] == -1)
        {
            colors[i] = 1 - colors[u];
            if (!coloring(i, colors[i]))
            {
                return false;
            }
        }
        else if (colors[u] == colors[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n, m;
    while (cin >> n && n != 0)
    {
        colors.clear();
        edge.clear();
        bool is_NORMAL = true;
        cin >> m;
        for (int i = 0; i < n; i++)
        {
            colors.push_back(-1);
            vector<int> newcol;
            edge.push_back(newcol);
        }
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            edge[a].push_back(b);
            edge[b].push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            if (colors[i] == -1)
            {
                if (!coloring(i, 0))
                {
                    is_NORMAL = false;
                }
            }
        }
        if (is_NORMAL)
        {
            cout << "NORMAL.\n";
        }
        else
        {
            cout << "RAINBOW.\n";
        }
    }
    return 0;
}