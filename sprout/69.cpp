#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <functional>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <queue>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
long long int a[10000], b[10000], c[10000], current[10000];
int check(int M, int n)
{
    for (int i = 0; i < n; i++)
    {
        current[i] = a[i] + b[i] * M;
    }
    sort(current, current + n);

    int j = 0,win_count=0;
    for (int i = 0; i < n; i++)
    {
        if (j >= n)
        {
            break;
        }
        while (current[j] <= c[i] && j < n)
        {
            j++;
        }
        if (j >= n)
        {
            break;
        }
        j++;
        win_count++;
    }
    return win_count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 10000; i++)
        {
            a[i] = 0;
            b[i] = 0;
            c[i] = 0;
            current[i] = 0;
        }
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        sort(c, c + n);
        int L = 0, R = 100000000, mid = (L + R) / 2, record = -1;
        while (L <= R)
        {
            int res = check(mid, n);
            if (res < k)
            {
                L = mid + 1;
            }
            else
            {
                record = mid;
                R = mid - 1;
            }
            mid = (L + R) / 2;
        }
        cout << record << '\n';
    }
    return 0;
}