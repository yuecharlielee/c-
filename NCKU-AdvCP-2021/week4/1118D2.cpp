#include <bits/stdc++.h>
using namespace std;
bool check(int mid, vector<int> a, int m)
{
    long long ans = 0;
    int t = mid;
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (t == 0)
        {
            t = mid;
            cnt++;
        }
        ans += max(0, a[i] - cnt);
        t--;
    }
    return ans >= m;
}
int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int n, m;
    long long sum=0;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum < m)
    {
        cout << "-1\n";
        return 0;
    }
    sort(a.rbegin(), a.rend());
    int l = 1, r = n;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (check(mid, a, m))
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l << "\n";
    return 0;
}