#include <bits/stdc++.h>
using namespace std;
int dp[101];
int a[101];
int builddp(int n)
{
    
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << builddp(n) << "\n";
    }
    return 0;
}