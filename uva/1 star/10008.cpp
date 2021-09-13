#include <bits/stdc++.h>
using namespace std;
bool compare(pair<char, int> a,pair<char, int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}
int main()
{
    int n;
    cin >> n;
    map<char, int> res;
    string s;
    cin.ignore();
    while (n--)
    {
        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(toupper(s[i])))
            {
                res[toupper(s[i])]++;
            }
        }
    }
    vector<pair<char, int>> ves;
    for (auto i : res)
    {
        pair<char, int> newpair = make_pair(i.first, i.second);
        ves.push_back(newpair);
    }
    sort(ves.begin(), ves.end(),compare);
    for(auto i:ves){
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}