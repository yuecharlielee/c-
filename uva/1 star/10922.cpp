#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (cin >> s)
    {
        int sum = 0, degree = 1;
        if (s == "0")
        {
            break;
        }
        for (auto i : s)
        {
            sum += i - '0';
        }
        while (sum > 9)
        {
            string n = to_string(sum);
            int new_sum = 0;
            for (auto i : n)
            {
                new_sum += i - '0';
            }
            sum = new_sum;
            degree++;
        }
        if (sum == 9)
        {
            cout << s << " is a multiple of 9 and has 9-degree " << degree << ".\n";
        }
        else
        {
            cout << s << " is not a multiple of 9.\n";
        }
    }
    system("PAUSE");
    return 0;
}