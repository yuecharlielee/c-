#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string input;
    cin >> n;
    while (n--)
    {
        vector<long long> dp(210);
        cin >> input;
        for (int i = 0; i < input.size(); i++)
        {
            if (input[i] == '0')
            {
                dp[i + 1] = max(dp[i], dp[i + 1]);
            }
            else
            {
                long long sum = 0;
                for (int j = i; j < input.size(); j++)
                {
                    sum = 10 * sum + (input[j] - '0');
                    if (sum > INT_MAX)
                    {
                        break;
                    }
                    dp[j + 1] = max(dp[j + 1], dp[i] + sum);
                }
            }
        }
        cout << dp[input.size() ] << '\n';
    }

    return 0;
}