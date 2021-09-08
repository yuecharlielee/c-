#include <algorithm>
#include <iostream>
#include <math.h>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string N, a;
        int n = 0;
        cin >> N >> a >> n;
        bool is_negtive = false;
        vector<vector<long long>> s;
        for (int j = 0; j < n; j++)
        {
            vector<long long> row(n, 0);
            for (int k = 0; k < n; k++)
            {
                cin >> row[k];
                if(row[k]<0){
                    is_negtive = true;
                }
            }
            s.push_back(row);
        }
        bool is_Symmetric = true;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (s[j][k] != s[n - 1 - j][n - 1 - k])
                {
                    is_Symmetric = false;
                    break;
                }
            }
        }
        if (is_Symmetric && !is_negtive)
        {
            cout << "Test #" << i + 1 << ": Symmetric.\n";
        }
        else
        {
            cout << "Test #" << i + 1 << ": Non-symmetric.\n";
        }
    }
    system("PAUSE");
    return 0;
}