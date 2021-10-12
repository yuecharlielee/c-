#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        map<long long, int> pop;
        for (int i = 0; i < n; i++)
        {
            vector<int> num(5, 0);
            for (int j = 0; j < 5; j++)
            {
                cin >> num[j];
            }
            sort(num.begin(), num.end());
            long long nums = 0;
            for (int j = 0; j < 5; j++)
            {
                nums = num[j] + nums * 1000;
            }
            pop[nums]++;
        }
        int maxx = 0, count = 0;
        for (auto i : pop)
        {
            maxx = max(maxx, i.second);
        }
        for (auto i : pop)
        {
            if (i.second == maxx)
            {
                count+=i.second;
            }
        }
        cout << count << "\n";
    }

    return 0;
}