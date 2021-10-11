#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}
bool cmp1(pair<int, int> a, pair<int, int> b)
{
    if (a.first < b.first)
        return true;
    return false;
}
int main()
{
    //greedy
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        if (count > 0)
        {
            cout << "\n";
        }
        vector<pair<int, int>> segment, res;
        int l, r, m;
        cin >> m;
        while (cin >> l >> r)
        {
            if (l == 0 && r == 0)
            {
                break;
            }
            pair<int, int> newsegment = make_pair(l, r);
            segment.push_back(newsegment);
        }
        sort(segment.begin(), segment.end(), cmp);//to find the left smallest
        int start = 0, end = 0, temp = -1;
        for (int i = 0; i < segment.size(); i++)
        {
            temp = -1;
            while (i < segment.size() && segment[i].first <= start)  
            {
                if (segment[i].second > end)
                {
                    end = segment[i].second;
                    temp = i;
                }
                i++;
            }
            if (temp == -1)
            {
                break;
            }
            res.push_back(segment[temp]);
            if (end >= m)
            {
                break;
            }
            start = end;
            i--;
        }
        if (end < m)
        {
            cout << "0\n";
        }
        else
        {
            cout << res.size() << "\n";
            for (auto i : res)
            {
                cout << i.first << " " << i.second << "\n";
            }
        }
        count++;
    }

    system("PAUSE");
    return 0;
}