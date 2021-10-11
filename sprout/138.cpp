#include <bits/stdc++.h>
using namespace std;
int dp[1000001][2];
void builddp()
{
    dp[0][0] = 1;
    dp[0][1] = 0;
    dp[1][0] = 0;
    dp[1][1] = 1;

    for (int i = 2; i < 1000001; i++)
    {
        dp[i][0] = (dp[i - 2][0] + dp[i - 1][1] * 2) % 1000007; //凸0格
        dp[i][1] = (dp[i - 1][0] + dp[i - 2][1]) % 1000007;     //凸1格
    }
}
int main()
{
    int t;
    builddp();
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
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