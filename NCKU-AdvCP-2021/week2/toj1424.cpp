#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, sum = 0;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> q;
    while (n--)
    {
        int a;
        cin >> a;
        q.push(a);
    }
    while (q.size() != 1)
    {
        int newnum = q.top();
        q.pop();
        newnum += q.top();
        q.pop();
        sum += newnum;
        q.push(newnum);
    }
    cout << sum << "\n";
    return 0;
}