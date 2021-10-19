#include <bits/stdc++.h>
using namespace std;
int m;
bool cmp(int a, int b)
{
    if (a % m != b % m)
    {
        return a % m < b % m;
    }
    else
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            return a < b;
        }
        else if (a & 1 && b & 1)
        {
            return a > b;
        }
        else
        {
            if (a % 2 == 0)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    vector<int> input(10000, 0);
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            cout << "0 0\n";
            break;
        }
        cout << n << " " << m << "\n";
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        sort(input.begin(), input.begin() + n, cmp);
        for (int i = 0; i < n; i++)
        {
            cout << input[i] << "\n";
        }
    }
    return 0;
}