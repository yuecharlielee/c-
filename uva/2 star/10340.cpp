#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    while (cin >> s >> t)
    {
        int i = 0, pos = 0;
        bool is_allinall = false;
        while (i < t.size())
        {
            if (t[i] == s[pos])
            {
                i++;
                pos++;
            }
            else
            {
                i++;
            }
            if (s[pos] == '\0')
            {
                is_allinall = true;
            }
        }
        if (is_allinall)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}