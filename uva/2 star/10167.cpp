#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        vector<pair<int, int>> p(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> p[i].first >> p[i].second;
        }
        int a, b;
        bool is_find = false;
        for (a = -500; a <= 500; a++)
        {

            for (b = -500; b <= 500; b++)
            {
                int l = 0, r = 0;
                for (int i = 0; i < 2 * n; i++)
                {
                    if (a * p[i].first + b * p[i].second > 0)
                    {
                        l++;
                        continue;
                    }
                    if (a * p[i].first + b * p[i].second < 0)
                    {
                        r++;
                        continue;
                    }
                }
                if (l == n && r == n)
                {
                    cout << a << " " << b << "\n";
                    is_find = true;
                }
                if (is_find)
                {
                    break;
                }
            }
            if (is_find)
            {
                break;
            }
        }
    }

    return 0;
}