#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (cin >> s)
    {
        string input = "";

        while (s[s.size() - 1] != '#')
        {
            for (auto i : s)
            {
                if (i == '0' || i == '1')
                {
                    input.push_back(i);
                }
            }
            cin >> s;
        }
        for (auto i : s)
        {
            if (i == '0' || i == '1')
            {
                input.push_back(i);
            }
        }
        //((a mod n) × (b mod n)) mod n = (a × b) mod n
        int number = 0;
        for (int i = 0; i < input.size(); i++)
        {
            number *= 2;
            number += (input[i] - '0');
            number %= 131071;
        }
        if (number)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}