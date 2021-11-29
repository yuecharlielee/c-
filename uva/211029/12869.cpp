#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    while (cin >> a >> b && a != 0 && b != 0)
    {
        a /= 5;
        b /= 5;
        cout << b - a + 1 << "\n";
    }
    return 0;
}