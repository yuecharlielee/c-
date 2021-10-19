#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    while (cin >> n >> m)
    {
        vector<vector<int>> prefix_sum(n + 1, vector<int>(n + 1, 0)), v(n + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> v[i][j];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            prefix_sum[1][i] = prefix_sum[1][i - 1] + v[1][i];
        }
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                prefix_sum[i][j] = prefix_sum[i][j - 1] + prefix_sum[i - 1][j] - prefix_sum[i - 1][j - 1] + v[i][j];
            }
        }
        cout << "\n";
        while (m--)
        {
            int x1, x2, y1, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            cout << prefix_sum[x2][y2] - prefix_sum[x1 - 1][y2] - prefix_sum[x2][y1 - 1] + prefix_sum[x1 - 1][y1 - 1] << "\n";
        }
    }

    return 0;
}