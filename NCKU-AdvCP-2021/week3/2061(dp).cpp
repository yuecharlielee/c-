#include <iostream>
#include <stack>
using namespace std;

string s;
int dp[10000][10000];

int main()
{
    cin.tie(NULL);
    getline(cin, s);

    if (s.length() >= 10000)
    {
        int cnt[10] = {};

        for (int i = 0; i < s.length(); i++)
            cnt[s[i] - '0']++;

        for (int i = 0; i < 10; i++)
            if (cnt[i] >= 1000)
            {
                for (int j = 0; j < 1000; j++)
                    cout << (char)('0' + i);
                cout << endl;
                break;
            }
    }
    else
    {
        int r, m = 0, ml, mr;

        for (int w = 0; w < s.length(); w++)
            for (int l = 0; l + w < s.length(); l++)
            {
                r = l + w;

                if (w == 0)
                    dp[l][r] = 1;
                else
                    dp[l][r] = max(dp[l + 1][r - 1] + ((s[l] == s[r]) ? 2 : 0), max(dp[l + 1][r], dp[l][r - 1]));

                if (dp[l][r] > m)
                {
                    ml = l;
                    mr = r;
                    m = dp[l][r];
                }
            }

        stack<char> res;

        while (m > 0)
        {
            while (m > 0 && s[ml] == s[mr])
            {
                cout << s[ml];
                if (m != 1)
                    res.push(s[ml]);
                m -= 2;
                ml++;
                mr--;
            }

            int b = dp[ml + 1][mr];
            int c = dp[ml][mr - 1];

            if (b >= c)
            {
                ml++;
            }
            else
            {
                mr--;
            }
        }
        while (!res.empty())
        {
            cout << res.top();
            res.pop();
        }
        cout << endl;
    }

    return 0;
}