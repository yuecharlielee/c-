#include <bits/stdc++.h>
using namespace std;
int dp[1000001][3];
void builddp()
{
    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[1][2] = 1;
    dp[2][0] = 3;
    dp[2][1] = 2;
    dp[2][2] = 2;
    for (int i = 3; i < 1000001; i++)
    {
        dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % 1000007; //red end
        dp[i][1] = (dp[i - 1][0] + dp[i - 1][1] - 1) % 1000007;            //blue end
        dp[i][2] = (dp[i - 1][0] + dp[i - 1][2] - 1) % 1000007;            //green end
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
        cout << (dp[n][0] + dp[n][1] + dp[n][2]) % 1000007 << "\n";
    }
    return 0;
}