#include <bits/stdc++.h>
using namespace std;
bool cut(vector<int> a, int x, int w)
{
    int sum = 0, cut = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > x)
        {
            return false;
        }
        if (sum + a[i] > x)
        {
            cut++;
            sum = a[i];
        }
        else
        {
            sum += a[i];
        }
    }
    return w >= cut;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, w;
    while (cin >> n >> w)
    {
        if (n == 0 && w == 0)
        {
            break;
        }
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0, r = 1000000;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (cut(a, mid, w))
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << l << "\n";
    }

    return 0;
}