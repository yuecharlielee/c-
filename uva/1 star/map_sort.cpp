#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
bool to_compare(pair<string, int> &p1, pair<string, int> &p2)
{
    return p1.second > p2.second;
}
int main()
{
    map<string, int> test;
    test["aaaa"] = 1;
    test["bbbb"] = 2;
    test["cccc"] = 3;

    cout << "sort by key\n";
    vector<pair<string, int>> ves;
    for (map<string, int>::iterator it = test.begin(); it != test.end(); ++it)
    {
        cout << it->first << " " << it->second << "\n";
        pair<string, int> a = make_pair(it->first, it->second);
        ves.push_back(a);
    }
    sort(ves.begin(), ves.end(), to_compare);
    cout << "sort by value\n";
    for (auto &it : ves)
    {
        cout << it.first << " " << it.second << "\n";
    }
    system("PAUSE");
    return 0;
}