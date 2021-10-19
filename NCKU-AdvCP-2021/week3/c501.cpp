#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int t, n, m, d, c;
    cin >> t;
    while (t--)
    {
        vector<int> l, r;
        cin >> n >> m;
        vector<vector<int>> v(4, vector<int>());
        while (n--)
        {
            cin >> d >> c;
            v[c].push_back(d);
        }
        bool is_qq = false;
        for (int i = 1; i <= 3; i++)
        {
            sort(v[i].begin(), v[i].end());
            if (v[i].size() < m)
            {
                is_qq = true;
                break;
            }
        }
        if (is_qq)
        {
            cout << "QQ\n";
            continue;
        }
        
    }
    return 0;
}