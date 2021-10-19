#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, mod = 1e9 + 7;
    string s;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string ss = "";
        getline(cin, s);
        int oc = 0, wc = 0, count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'O')
            {
                count = (count + wc) % mod;
                oc++;
            }
            else if (s[i] == 'w')
            {
                wc = (oc + wc) % mod;
            }
        }
        cout << count << "\n";
    }
    return 0;
}