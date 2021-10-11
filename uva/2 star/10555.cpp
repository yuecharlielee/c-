#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    return gcd(b, a % b);
}
int pow_10(int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        res *= 10;
    }
    return res;
}
int main()
{
    string s;
    while (cin >> s && s != "0")
    {
        string digit = s.substr(2, s.size() - 5);
        int len = digit.size();
        long long n = stoi(digit);
        if (n == 0)
        {
            cout << "1/0\n";
            continue;
        }
        int beta = n;
        int mina = 1e9, minb = 1e9;
        for (int i = 1; i <= len; i++)
        {
            beta /= 10;
            int a = n - beta;
            int b = pow_10(len) - pow_10(len - i);
            int d = gcd(a, b);
            a /= d;
            b /= d;
            mina = min(mina, a);
            minb = min(minb, b);
        }
        cout << mina << "/" << minb << "\n";
    }

    return 0;
}