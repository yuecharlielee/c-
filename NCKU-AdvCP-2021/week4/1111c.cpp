#include <bits/stdc++.h>
using namespace std;
long long n, k, a, b;
vector<long long> avengers;
long long rec(long long l, long long r)
{
    long long i = lower_bound(avengers.begin(), avengers.end(), l) - avengers.begin();
    long long j = upper_bound(avengers.begin(), avengers.end(), r) - avengers.begin();
    j--;
    long long x = j - i + 1;
    long long power_consumed;
    if (x == 0) //
    {
        power_consumed = a;
    }
    else
    {
        power_consumed = b * x * (r - l + 1);
    }
    if (l == r || x == 0)
    {
        return power_consumed;
    }
    long long mid = (l + r) / 2;
    long long minpower = min(power_consumed, rec(l, mid) + rec(mid + 1, r));
    return minpower;
}
int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    cin >> n >> k >> a >> b;
    for (int i = 0; i < k; i++)
    {
        int val;
        cin >> val;
        avengers.push_back(val);
    }
    sort(avengers.begin(), avengers.end());
    long long x = (long long)1 << n;
    cout << rec(1, x) << "\n";
    return 0;
}