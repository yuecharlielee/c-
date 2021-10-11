#include <bits/stdc++.h>
using namespace std;
int dp[1001];
int input[1001];
void builddp(int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        dp[i] = input[i];
    }
    for (int i = k; i < n; i++)
    {
        int mx = 0;
        for (int j = 0; j < k; j++)
        {
            if (i - k - j < 0)
            {
                break;
            }
            //cout << i - k - j << " ";
            mx = max(mx, dp[i - k - j]);
        }
        //cout << "\n";
        //dp[i] = max(dp[i - 2], dp[i - 3]) + input[i];
        dp[i] = mx + input[i];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        builddp(n, k);
        int mx = 0;
        if (k == 1 || n <= k)
        {
            for (int i = 0; i < n; i++)
            {
                mx = max(mx, dp[i]);
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                mx = max(mx, dp[n - i]);
            }
        }

        cout << mx << "\n";
    }
    return 0;
}