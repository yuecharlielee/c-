#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> spend_dic;
    int n, m;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        string job;
        int value;
        cin >> job >> value;
        spend_dic[job] = value;
    }
    for (int i = 0; i < n; i++)
    {
        string s;
        int cost = 0;
        while (getline(cin, s) && s != ".")
        {
            stringstream ss(s);
            string jobs;
            while (ss >> jobs)
            {
                if (spend_dic.find(jobs) != spend_dic.end())
                {
                    cost += spend_dic[jobs];
                }
            }
        }
        cout << cost << "\n";
    }
    return 0;
}