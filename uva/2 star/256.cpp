#include <bits/stdc++.h>
using namespace std;
vector<int> res[5];
void build()
{
    cout << "n=2\n";
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if ((i + j) * (i + j) == (i * 10 + j))
            {
                printf("%01d%01d\n", i, j);
            }
        }
    }
    cout << "n=4\n";
    for (int i = 0; i <= 99; i++)
    {
        for (int j = 0; j <= 99; j++)
        {
            if ((i + j) * (i + j) == (i * 100 + j))
            {
                printf("%02d%02d\n", i, j);
            }
        }
    }
    cout << "n=6\n";
    for (int i = 0; i <= 999; i++)
    {
        for (int j = 0; j <= 999; j++)
        {
            if ((i + j) * (i + j) == (i * 1000 + j))
            {
                printf("%03d%03d\n", i, j);
            }
        }
    }
    cout << "n=8\n";
    for (int i = 0; i <= 9999; i++)
    {
        for (int j = 0; j <= 9999; j++)
        {
            if ((i + j) * (i + j) == (i * 10000 + j))
            {
                printf("%04d%04d\n", i, j);
            }
        }
    }
}
int main()
{
    int n;
    //build();
    /*n=2
    00
    01
    81
    n=4
    0000
    0001
    2025
    3025
    9801
    n=6
    000000
    000001
    088209
    494209
    998001
    n=8
    00000000
    00000001
    04941729
    07441984
    24502500
    25502500
    52881984
    60481729
    99980001*/
    while (cin >> n)
    {
        if (n == 2)
        {
            cout << "00\n01\n81\n";
        }
        if (n == 4)
        {
            cout << "0000\n0001\n2025\n3025\n9801\n";
        }
        if (n == 6)
        {
            cout << "000000\n000001\n088209\n494209\n998001\n";
        }
        if (n == 8)
        {
            cout << "00000000\n00000001\n04941729\n07441984\n24502500\n25502500\n52881984\n60481729\n99980001\n";
        }
    }
    return 0;
}