#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first > b.first;
    }
    else
    {
        return a.second < b.second;
    }
}
int main()
{
    string s;
    int count = 0;
    while (getline(cin, s))
    {
        if(count>0){
            cout << "\n";
        }
        vector<pair<int, int>> a;
        unordered_map<int, int> aa;
        for (int i = 0; i < s.size(); i++)
        {
            aa[s[i]]++;
        }
        for (auto i : aa)
        {
            pair<int, int> newpair;
            newpair.first = i.first;
            newpair.second = i.second;
            a.push_back(newpair);
        }
        sort(a.begin(), a.end(), compare);
        for (auto i : a)
        {
            cout << i.first << " " << i.second << "\n";
        }
        count++;
    }
    system("PAUSE");
    return 0;
}