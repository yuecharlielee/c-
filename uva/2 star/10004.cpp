#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> edge;
vector<int> colors;
bool bicoloring(int node, int color)
{
    colors[node] = color;
    for (int i : edge[node])
    {
        if (colors[i] == -1)
        {
            colors[i] = 1 - colors[node];
            if (!bicoloring(i, colors[i]))
            {
                return false;
            }
        }
        else if (colors[i] == colors[node])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n, l;
    while (cin >> n && n != 0)
    {
        colors.clear();
        edge.clear();
        bool is_bicoloring = true;
        for (int i = 0; i < n; i++)
        {
            vector<int> newcol;
            edge.push_back(newcol);
            colors.push_back(-1);
        }
        cin >> l;
        for (int i = 0; i < l; i++)
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
                if (!bicoloring(i, 0))
                {
                    is_bicoloring = false;
                    break;
                }
            }
        }
        if (is_bicoloring)
        {
            cout << "BICOLORABLE.\n";
        }
        else
        {
            cout << "NOT BICOLORABLE.\n";
        }
    }
    system("PAUSE");
    return 0;
}