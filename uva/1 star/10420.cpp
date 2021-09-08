#include <algorithm>
#include <ctype.h>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
bool to_compare(pair<char, int> p1, pair<char, int> p2)
{
    return p1.second > p2.second;
}
int main()
{
    map<char, int> alphas;
    int n;
    cin >> n;
    cin.ignore();
    vector<pair<char, int>> ans;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        for (int j = 0; j < s.size(); j++)
        {
            if (isalpha(s[j]))
            {
                alphas[toupper(s[j])]++;
            }
        }
    }

    for (auto &it : alphas)
    {
        pair<char, int> newpair = make_pair(it.first, it.second);
        ans.push_back(newpair);
    }
    sort(ans.begin(), ans.end(), to_compare);
    for (auto &it : ans)
    {
        cout << it.first << " " << it.second << "\n";
    }
    system("PAUSE");
    return 0;
}