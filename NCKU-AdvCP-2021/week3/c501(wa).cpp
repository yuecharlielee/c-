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
        vector<pair<int, int>> a;
        vector<int> countpair(3);
        cin >> n >> m;
        while (n--)
        {
            cin >> d >> c;
            countpair[c - 1]++;
            a.push_back({d, c});
        }
        if (min(min(countpair[0], countpair[1]), countpair[2]) < m)
        {
            cout << "QQ\n";
            continue;
        }
    }
    return 0;
}