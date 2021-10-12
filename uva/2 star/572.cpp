#include <bits/stdc++.h>
using namespace std;
char oilmap[102][102];
void fill(int x, int y)
{
    oilmap[x][y] = '*';
    for (int i = x - 1; i <= x + 1; i++)
    {
        for (int j = y - 1; j <= y + 1; j++)
        {
            if (oilmap[i][j] == '@')
            {
                fill(i, j);
            }
        }
    }
}
int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        if (m == 0 && n == 0)
        {
            break;
        }
        for (int i = 0; i < 101; i++)
        {
            for (int j = 0; j < 101; j++)
            {
                oilmap[i][j] = '*';
            }
        }
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> oilmap[i][j];
            }
        }
        int count = 0;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (oilmap[i][j] == '@')
                {
                    fill(i, j);
                    count++;
                }
            }
        }
        cout << count << "\n";
    }

    return 0;
}