#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n;
    while (n--)
    {
        cin >> m;
        string res = "";
        if (m == 1)
        {
            cout << "1\n";
            continue;
        }
        for (int i = 9; i >= 2; i--)
        {
            while (m % i == 0)
            {
                m /= i;
                res.push_back(i + '0');
            }
        }
        if (m != 1)
        {
            cout << "-1\n";
            continue;
        }
        reverse(res.begin(), res.end());
        cout << res << "\n";
    }

    return 0;
}