#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    while (cin >> n)
    {
        vector<int> testcase(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> testcase[i];
        }
        sort(testcase.begin(), testcase.end());
        int minmid = testcase[(n - 1) / 2], maxmid = testcase[n / 2];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (testcase[i] == minmid || maxmid == testcase[i])
            {
                count++;
            }
        }
        int possible = 0;
        if (n % 2 == 0)
        {
            possible = maxmid - minmid + 1;
        }
        else
        {
            possible = 1;
        }
        cout << minmid << " " << count << " " << possible << "\n";
    }
    system("PAUSE");
    return 0;
}