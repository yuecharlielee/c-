#include <bits/stdc++.h>
using namespace std;
int fac[1002][5005] = {{0}, {1}};
int ans[1002] = {0, 1};
void find_fac()
{
    int index = 1;
    for (int i = 2; i <= 1000; i++)
    {
        for (int j = 0; j <= index; j++)
        {
            fac[i][j] = fac[i - 1][j] * i;
        }
        for (int j = 0; j <= index; j++)
        {
            if (fac[i][j] >= 10)
            {
                fac[i][j + 1] += fac[i][j] / 10;
                fac[i][j] %= 10;
                if (j == index)
                {
                    index++;
                }
            }

            ans[i] += fac[i][j];
        }
    }
}
int main()
{
    int n;
    find_fac();
    while (cin >> n)
    {
        cout << ans[n] << "\n";
    }

    return 0;
}