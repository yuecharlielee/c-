#include <bits/stdc++.h>
using namespace std;
int dp[46];
void build()
{
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= 45; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
}
int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int n;
    build();
    while (cin >> n)
    {
        cout << dp[n] << "\n";
    }
    return 0;
}