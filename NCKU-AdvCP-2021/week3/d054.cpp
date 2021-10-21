#include <bits/stdc++.h>
using namespace std;
long long dp[40];
void build()
{
    dp[0] = 1;
    dp[1] = 5;
    dp[2] = 11;
    for (int i = 3; i < 40; i++)
    {
        dp[i] = dp[i - 1] + 4 * dp[i - 2] + 2 * dp[i - 3];
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    build();
    cin >> n;
    while (n--)
    {
        cin >> m;
        cout << dp[m - 1] << "\n";
    }
    return 0;
}