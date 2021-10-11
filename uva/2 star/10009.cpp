#include <bits/stdc++.h>
using namespace std;
int a[26];          // 紀錄每個城市的上一個城市
vector<int> va[26]; // 紀錄每個城市到羅馬的path，包含自己
int main()          //此圖為一棵樹
{
    int t, n, m;
    string s1, s2;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        for (int i = 0; i < 26; i++)
        {
            va[i].clear();
            a[i] = -1;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> s1 >> s2;
            int n1 = s1[0] - 'A', n2 = s2[0] - 'A';
            a[n2] = n1;
        }
        int cur;
        for (int i = 0; i < 26; i++) //bulid tree
        {
            cur = i;
            va[i].push_back(cur);
            while (a[cur] != -1)
            {
                va[i].push_back(a[cur]);
                cur = a[cur];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s1 >> s2;
            int n1 = s1[0] - 'A', n2 = s2[0] - 'A';
            int root = -1;
            for (int j : va[n1]) //to find the city which is the closest city of s1 and s2
            {
                for (int k : va[n2])
                {
                    if (j == k)
                    {
                        root = k;
                        break;
                    }
                }
                if (j == root)
                {
                    break;
                }
            }
            for (int j = 0; j < va[n1].size(); j++)
            {
                if (root == va[n1][j])
                {
                    break;
                }
                cout << char('A' + va[n1][j]);
            }
            bool flag = false;
            for (int j = va[n2].size() - 1; j >= 0; j--)
            {
                //begin in Rome
                if (va[n2][j] == root)
                {
                    flag = true;
                }
                if (flag)
                {
                    cout << char('A' + va[n2][j]);
                }
            }
            cout << "\n";
        }
        if (t)
        {
            cout << "\n";
        }
    }
    return 0;
}