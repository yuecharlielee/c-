#include <bits/stdc++.h>
using namespace std;
int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    vector<int> best, bad, input;
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        input.push_back(a);
        if (a >= 60)
        {
            best.push_back(a);
        }
        else
        {
            bad.push_back(a);
        }
    }
    sort(best.begin(), best.end());
    sort(bad.begin(), bad.end());
    sort(input.begin(), input.end());
    for (int i = 0; i < input.size(); i++)
    {
        cout << input[i];
        if (i != input.size() - 1)
        {
            cout << " ";
        }
    }
    cout << "\n";
    if (bad.size() == 0)
    {
        cout << "best case\n";
    }
    else
    {
        cout << *(--bad.end()) << "\n";
    }
    if (best.size() == 0)
    {
        cout << "worst case\n";
    }
    else
    {
        cout << *best.begin() << "\n";
    }
    return 0;
}