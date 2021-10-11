#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        map<string, int> pop;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                string num;
                cin >> num;
                pop[num]++;
            }
        }
        
    }

    return 0;
}