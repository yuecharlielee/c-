#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, mod = 1e9 + 7;
    string s;
    scanf("%d", &n);
    char a = getchar();
    a = getchar();
    while (n--)
    {
        int oc = 0, wc = 0, count = 0;
        while (a != '\n')
        {
            if (a == 'O')
            {
                count = (count + wc) % mod;
                oc++;
            }
            else if (a == 'w')
            {
                wc = (oc + wc) % mod;
            }
            a = getchar();
        }
        printf("%d\n", count);
        a = getchar();
    }
    return 0;
}