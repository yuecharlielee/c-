#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    while (cin >> n >> m)
    {
        vector<int> prefix_sum(n + 1, 0), v(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        prefix_sum[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            prefix_sum[i] += prefix_sum[i - 1] + v[i];
        }
        while (m--)
        {
            int l, r;
            cin >> l >> r;
            cout << prefix_sum[r] - prefix_sum[l - 1] << "\n";
        }
    }

    return 0;
}