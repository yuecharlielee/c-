#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int n;
    while (cin >> n)
    {
        vector<int> dp(3);
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'r')
            {
                dp[0]++;
            }
            if (s[i] == 'g')
            {
                dp[1] = max(dp[0], dp[1]) + 1;
            }
            if (s[i] == 'b')
            {
                for (int i = 0; i < 3; i++)
                {
                    dp[2] = max(dp[2], dp[i]);
                }
                dp[2]++;
            }
        }
        int mx = 0;
        for (int i = 0; i < 3; i++)
        {
            mx = max(mx, dp[i]);
        }
        cout << mx << "\n";
    }

    return 0;
}