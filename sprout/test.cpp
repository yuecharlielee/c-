#include <algorithm>
#include <iostream>
#include <string.h> //memset
#define C 100000000
long long int a[10000], b[10000], c[10000], current[10000];
int check(int M, int n)
{
    for (int i = 0; i < n; i++)
        current[i] = a[i] + b[i] * M;
    std::sort(current, current + n);
    long long int *pos, count = 0;
    pos = std::upper_bound(current, current + n, c[0]);
    if (pos == current + n)
        return 0;
    int j = pos - current;
    for (int i = 0; i < n; i++)
    {
        if (j >= n)
            break;
        while (current[j] <= c[i] && j < n)
            j++;
        if (j >= n)
            break;
        j++;
        count++;
    }
    return count;
}
int main()
{
    std::ios::sync_with_stdio(false);
    int n, t, k, result, record;
    std::cin >> t;
    while (t--)
    {
        record = -1;
        std::cin >> n >> k;
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        memset(c, 0, sizeof(c));
        memset(current, 0, sizeof(current));
        for (int i = 0; i < n; i++)
            std::cin >> a[i] >> b[i];
        for (int i = 0; i < n; i++)
            std::cin >> c[i];
        std::sort(c, c + n);
        int L = 0, R = C, mid = (L + R) / 2;
        while (L <= R)
        {
            result = check(mid, n);
            if (result < k)
                L = mid + 1;
            else
            {
                record = mid;
                R = mid - 1;
            }
            mid = (R + L) / 2;
        }
        std::cout << record << std::endl;
    }
}