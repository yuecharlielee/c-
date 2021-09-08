#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int m, n, q;
        cin >> m >> n >> q;
        vector<vector<char>> table;
        for (int i = 0; i < m; i++)
        {
            vector<char> newrows(n, 0);
            for (int j = 0; j < n; j++)
            {
                cin >> newrows[j];
            }
            table.push_back(newrows);
        }
        cout << m << " " << n << " " << q << "\n";
        for (int i = 0; i < q; i++)
        {
            int len = 1;
            int r, c;
            cin >> r >> c;
            bool flag = true;
            int dif = 1;
            while (true)
            {
                for (int j = r - dif; j <= r + dif; j++)
                {
                    for (int k = c - dif; k <= c + dif; k++)
                    {
                        if (j < 0 || k < 0 || j >= m || k >= n)
                        {
                            flag = false;
                            break;
                        }
                        if (table[r][c] != table[j][k])
                        {
                            flag = false;
                            break;
                        }
                    }
                    if (!flag)
                    {
                        break;
                    }
                }
                if (flag)
                {
                    dif++;
                    len += 2;
                }
                else
                {
                    break;
                }
            }
            cout << len << "\n";
        }
    }
    system("PAUSE");
    return 0;
}