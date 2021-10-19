#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, h;
        cin >> n >> h;
        string a = "";
        for (int i = 0; i < n; i++)
        {
            if (n - i > h)
            {
                a += '0';
            }
            else
            {
                a += '1';
            }
        }
        cout << a << "\n";
        while (next_permutation(a.begin(), a.end()))
        {
            cout << a << "\n";
        }
    }
    return 0;
}