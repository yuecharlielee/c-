#include <bits/stdc++.h>
using namespace std;
long long dp[31][2];
void build()
{
    dp[0][0] = 1;
    dp[0][1] = 0;
    dp[1][0] = 0;
    dp[1][1] = 1;
    for (int i = 2; i < 31; i++)
    {
        dp[i][0] = dp[i - 2][0] + dp[i - 1][1] * 2;
        dp[i][1] = dp[i - 2][1] + dp[i - 1][0];
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    build();
    while (cin >> n && n != -1)
    {
        if (n == 0)
        {
            cout << "1\n";
            continue;
        }
        if (n % 2)
        {
            cout << "0\n";
        }
        else
        {
            cout << dp[n][0] << "\n";
        }
    }
    return 0;
}