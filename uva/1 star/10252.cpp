#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    string a, b;
    vector<char> ans;
    while (getline(cin, a) && getline(cin, b))//有"" 用getline
    {
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < b.size(); j++)
            {
                if (a[i] == b[j])
                {
                    ans.push_back(a[i]);
                    b.erase(j, 1);
                    break;
                }
            }
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
        }
        cout << "\n";
        ans.clear();
    }
    system("PAUSE");
    return 0;
}