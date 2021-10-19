#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int a, b, c, d, e, f;
    while (cin >> a >> b >> c >> d >> e >> f)
    {
        if (a == b && b == c && c == d && d == e && e == f && f == 0)
        {
            cout << "Too many... = =\"\n";
            continue;
        }
        int count = 0;
        for (int i = -35; i <= 35; i++)
        {
            long long int v1 = a * pow(i, 5) + b * pow(i, 4) + c * pow(i, 3) + d * pow(i, 2) + e * i + f;
            long long int v2 = a * pow(i + 1, 5) + b * pow(i + 1, 4) + c * pow(i + 1, 3) + d * pow(i + 1, 2) + e * (i + 1) + f;
            if (v1 == 0)
            {
                cout << i << " " << i << "\n";
                count++;
                continue;
            }
            if (v1 * v2 < 0)
            {
                cout << i <<" " << i + 1 << "\n";
                count++;
            }
        }
        if (!count)
        {
            cout << "N0THING! >\\\\\\<\n";
        }
    }
    return 0;
}