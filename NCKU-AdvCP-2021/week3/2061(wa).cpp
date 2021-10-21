#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string res = to_string(s[0] - '0');
    int mx = 1;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        int l = i - 1, r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r])
        {
            if (r - l + 1 > mx)
            {
                mx = max(r - l + 1, mx);
                res = s.substr(l, mx);
            }
            l--;
            r++;
        }

        l = i - 1, r = i;
        while (l >= 0 && r < n && s[l] == s[r])
        {
            if (r - l + 1 > mx)
            {
                mx = max(r - l + 1, mx);
                res = s.substr(l, mx);
            }
            l--;
            r++;
        }
    }
    cout << res << "\n";
    return 0;
}