#include <bits/stdc++.h>
using namespace std;
int dp[5001][2001];
void build()
{
    for (int i = 0; i < 5001; i++)
    {
        for (int j = 0; j < 2001; j++)
        {
            dp[i][j] = 0;
        }
    }
    dp[0][0] = 0;
    dp[1][0] = 1;
    for (int i = 2; i < 5001; i++)
    {
        for (int j = 0; j < 2001; j++)
        {
            dp[i][j] = dp[i - 1][j] + dp[i - 2][j];
        }
        for (int j = 0; j < 2001; j++)
        {
            dp[i][j + 1] += dp[i][j] / 10;
            dp[i][j] = dp[i][j] % 10;
        }
    }
}
int main()
{
    build();
    int n;
    while (cin >> n)
    {
        printf("The Fibonacci number for %d is ", n);
        if (n <= 0)
        {
            cout << "0\n";
        }
        else
        {
            int i;
            for (i = 2000; i >= 0; i--)
            {
                if (dp[n][i] > 0)
                {
                    break;
                }
            }
            for (; i >= 0; i--)
            {
                cout << dp[n][i];
            }
            cout << "\n";
        }
    }
    return 0;
}