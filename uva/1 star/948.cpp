#include <algorithm>
#include <iostream>
#include <math.h>
#include <sstream>
#include <unordered_set>
#include <vector>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    vector<long> fib(45, 0);
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i < 45; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        cout << num << " = ";
        string ans = "";
        bool flag = false;
        for (int i = 44; i > 0; i--)
        {
            if (num >= fib[i])
            {
                num -= fib[i];
                flag = true;
                ans += "1";
            }
            else
            {
                if (flag)
                {
                    ans += "0";
                }
            }
        }
        cout << ans << " (fib)\n";
    }
    system("PAUSE");
    return 0;
}