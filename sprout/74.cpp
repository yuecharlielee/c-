#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int tail = -1, res = 0, h, count = 1;
        cin >> n;
        while (n--)
        {
            cin >> h;
            if (h == tail)
            {
                continue;
            }
            /*if ((h < tail) ^ count%2)
            {
                count++;
                res++;
            }*/
            if ((h > tail && count % 2) || (h < tail && !(count % 2)))//i若是偶數，則必須小於相鄰的項 i若是奇數，則必須大於相鄰的項
            {
                count++;
                res++;
            }
            tail = h;
        }
        if (count % 2)
        {
            res--;
        }
        cout << res << "\n";
    }
    return 0;
}