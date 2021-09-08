#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string a;
    while (cin >> a)
    {
        if (a == "0")
        {
            break;
        }
        int j = 0, k = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if ((i + 1) % 2 == 0)
            {
                j += a[i] - '0';
            }
            else
            {
                k += a[i] - '0';
            }
        }
        if ((j - k) % 11 == 0)
        {
            cout << a << " is a multiple of 11.\n";
        }
        else
        {
            cout << a << " is not a multiple of 11.\n";
        }
    }
    return 0;
}