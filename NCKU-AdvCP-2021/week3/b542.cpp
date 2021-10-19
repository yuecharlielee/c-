#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    while (m--)
    {
        int k;
        cin >> k;
        bool is_finded = false;
        /* big-O(n^2)
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[j] - v[i] == q)
                {
                    cout << "YES\n";
                    is_finded = true;
                    break;
                }
            }
            if(is_finded){
                break;
            }
        }
        if (!is_finded)
        {
            cout << "NO\n";
        }
        */
        int l = 0, r = 0;//two-pointer
        while (r < n)
        {
            if (l == r)
            {
                r++;
            }
            if ((r < n) && (v[r] - v[l] == k))
            {
                cout << "YES\n";
                is_finded = true;
                break;
            }
            if ((l < n) && (v[r] - v[l] > k))
            {
                l++;
            }
            else if ((r < n) && (v[r] - v[l] < k))
            {
                r++;
            }
        }
        if (!is_finded)
        {
            cout << "NO\n";
        }
    }
    return 0;
}