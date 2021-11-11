#include <bits/stdc++.h>
using namespace std;
bool ok(multiset<pair<int, int>> a, int mid, int k)
{
    int step = k;
    multiset<pair<int, int>> rev;
    for (auto i : a)
    {
        int l = i.first, r = i.second;
        while (!rev.empty() && rev.begin()->first <= l) // if can cover => remove
        {
            rev.erase(rev.begin());
        }
        rev.insert({r, l});
        if (rev.size() > mid)
        {
            if (step == 0)
            {
                return false;
            }
            rev.erase(--rev.end()); // greedy:cut the right which is maximum
            step--;
        }
    }
    return true;
}
int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int n, k;
    cin >> n >> k;
    multiset<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        a.insert({l, r});
    }
    int l = 0, r = n ;
    while (l < r)
    {
        int mid = (r + l) / 2;
        if (ok(a, mid, k))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l << "\n";
    return 0;
}