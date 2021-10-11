#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    while (cin >> s && s != ".")
    {
        vector<int> failure(s.size(), 0);
        failure[0] = -1;
        int pos = -1;
        for (int i = 1; i < s.size(); i++)
        {
            while (pos != -1 && s[i] != s[pos + 1])
            {
                pos = failure[pos];
            }
            if (s[i] == s[pos + 1])
            {
                pos++;
            }
            failure[i] = pos;
        }
        int repeat_length = s.size() - 1 - failure[s.size() - 1];
        if (s.size() % repeat_length == 0)
        {
            cout << s.size() / repeat_length << "\n";
        }
        else
        {
            cout << "1\n";
        }
    }

    return 0;
}