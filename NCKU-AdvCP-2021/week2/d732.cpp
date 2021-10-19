#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> input(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    for (int i = 0; i < m; i++)
    {
        int target;
        cin >> target;
        auto finded = lower_bound(input.begin(), input.end(), target);
        if (*finded == target)
        {
            cout << finded - input.begin() + 1 << "\n";
        }
        else
        {
            cout << "0\n";
        }
    }
    return 0;
}