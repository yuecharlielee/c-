#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int count = 1;
        int num = 1;
        while (num % n != 0)
        {
            num %= n;
            num = 10 * num + 1;
            count++;
        }
        cout << count << "\n";
    }

    return 0;
}