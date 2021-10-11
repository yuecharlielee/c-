#include <bits/stdc++.h>
using namespace std;
string addstring(string a, string b)
{
    if (a.size() < b.size())
    {
        return addstring(b, a);
    }
    string res = "";
    while (b.size() < a.size())
    {
        b = '0' + b;
    }
    bool allzero = true;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i] || a[i] != '0')
        {
            allzero = false;
            break;
        }
    }
    if (allzero)
    {
        return "0";
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int carry = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int digit = (a[i] - '0') + (b[i] - '0') + carry;
        res.push_back((digit % 10) + '0');
        carry = digit / 10;
    }
    if (carry > 0)
    {
        res.push_back(carry + '0');
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int a_index = 0, b_index = 0;
        string res = "";
        while (a_index < a.size())
        {
            int carry = 0;
            b_index = 0;
            string digit_res = "";
            while (b_index < b.size())
            {
                int digit_multi = (a[a_index] - '0') * (b[b_index] - '0') + carry;
                //cout << a[a_index] << " " << b[b_index] << " " << digit_multi << "\n";
                digit_res.push_back((digit_multi % 10) + '0');
                carry = digit_multi / 10;
                b_index++;
            }
            if (carry > 0)
            {
                digit_res.push_back(carry + '0');
            }
            reverse(digit_res.begin(), digit_res.end());
            for (int i = 0; i < a_index; i++)
            {
                digit_res.push_back('0');
            }
            res = addstring(res, digit_res);
            a_index++;
        }
        cout << res << "\n";
    }
    return 0;
}