#include <algorithm>
#include <iostream>
#include <math.h>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, sum = 0;
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            if (j % 2 == 1)
            {
                sum += j;
            }
        }
        cout << "Case " << (i + 1) << ": " << sum << "\n";
    }
    system("PAUSE");
    return 0;
}