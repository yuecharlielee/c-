#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        int sum = 0,a;
        while (ss>>a)
        {
            sum += a;
        }
        cout << sum << "\n";
    }
    return 0;
}