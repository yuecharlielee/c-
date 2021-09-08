#include <bits\stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<string> str;
    while (cin >> s && s != "")
    {
        str.push_back(s);
    }
    vector<bool> issame(str.size(), false);
    for (int i = 0; i < str.size() - 1; i++)
    {
        if (!issame[i])
        {
            for (int j = i + 1; j < str.size(); j++)
            {
                if (str[i] == str[j])
                {
                    issame[j] = true;
                }
            }
        }
    }
    for (int i = 0; i < str.size(); i++)
    {
        if (!issame[i])
        {
            cout << str[i] << "\n";
        }
    }
    return 0;
}