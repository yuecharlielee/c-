#include <bits/stdc++.h>
using namespace std;
vector<int> boxes[100001];
int ans[100001];
bool inside[100001];
int check(int n)
{
    int sum = 1;
    for (int i = 0; i < boxes[n].size(); i++)
    {
        sum += check(boxes[n][i]);
    }
    ans[n] = sum;
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < 100001; i++)
        {
            boxes[i].clear();
            ans[i] = 0;
            inside[i] = false;
        }
        for (int i = 1; i <= m; i++)
        {
            int a, b;
            cin >> a >> b;
            boxes[a].push_back(b);
            inside[b] = true;
        }
        for (int i = 1; i <= n; i++)
        {
            if (!inside[i])
            {
                check(i);
            }
        }
        int q;
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            int ch;
            cin >> ch;
            cout << ans[ch] << "\n";
        }
    }
    return 0;
}
