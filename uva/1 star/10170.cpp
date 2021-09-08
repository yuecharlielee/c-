#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
    long long s, d;
    while (cin >> s >> d)
    {
        for (int i = s;; i++)
        {
            d -= i;
            if (d <= 0)
            {
                cout << i << "\n";
                break;
            }
        }
    }
    system("PAUSE");
    return 0;
}