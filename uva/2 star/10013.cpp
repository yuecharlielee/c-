#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, count = 0;
    cin >> t;
    while (t--)
    {
        if (count > 0)
        {
            cout << "\n";
        }
        cin >> n;
        int carry = 0;
        string res = "", a = "", b = "";

        for (int i = 0; i < n; i++)
        {
            char achar, bchar;
            cin >> achar >> bchar;
            a += achar;
            b += bchar;
        }
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        for (int i = 0; i < n; i++)
        {
            int aint = a[i] - '0', bint = b[i] - '0';
            if (aint + bint + carry >= 10)
            {
                char digit = (aint + bint + carry) % 10 + '0';
                res += digit;
                carry = 1;
            }
            else
            {
                char digit = aint + bint + carry + '0';
                res += digit;
                carry = 0;
            }
        }
        reverse(res.begin(), res.end());
        cout << res << "\n";
        count++;
    }

    system("PAUSE");
    return 0;
}