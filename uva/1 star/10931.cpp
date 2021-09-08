#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        string b = "";
        int p = 0;
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                p++;
                b += "1";
            }
            else
            {
                b += "0";
            }
            n /= 2;
        }
        reverse(b.begin(), b.end());
        cout << "The parity of " << b << " is " << p << " (mod 2).\n";
    }
    system("PAUSE");
    return 0;
}