#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> ans(101, "");
    int max_num = 0, n = 0;
    string line;
    while (getline(cin, line) && line != "")
    {
        ans[n] = line;
        int now_num = line.size();
        max_num = max(max_num, now_num);
        n++;
    }
    for (int j = 0; j < max_num; j++)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (ans[i].length() > j)
            {
                cout << ans[i][j];
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    system("PAUSE");
    return 0;
}