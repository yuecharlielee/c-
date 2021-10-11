#include <bits/stdc++.h>
using namespace std;
int dp[1000001];
int input[1000001];
void builddp(int n)
{
    dp[0] = input[0];
    dp[1] = input[1];
    dp[2] = input[2]+input[0];
    for (int i = 3; i < n; i++)
    {
        dp[i] = max(dp[i - 2], dp[i - 3]) + input[i];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        builddp(n);
        cout << max(dp[n - 1], dp[n - 2]) << "\n";
    }
    return 0;
}