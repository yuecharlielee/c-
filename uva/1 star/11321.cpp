#include <bits/stdc++.h>

using namespace std;
int n, m;
bool compare(int a, int b)
{
    if (a % m != b % m)
    {
        return a % m < b % m;
    }
    if ((a & 1) && (b & 1))
    {
        return a > b;
    }
    else if (!(a & 1) && !(b & 1))
    {
        return a < b;
    }
    else
    {
        return a & 1;
    }
}
int main()
{
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            break;
        }
        vector<int> data(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> data[i];
        }
        sort(data.begin(), data.end(), compare);
        cout << n << " " << m << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << data[i] << "\n";
        }
    }
    cout << 0 << " " << 0 << "\n";
    system("PAUSE");
    return 0;
}