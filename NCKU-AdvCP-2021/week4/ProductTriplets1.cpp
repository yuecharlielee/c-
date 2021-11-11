#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int l = 1; l <= t; l++)
    {
        int n;
        long long res = 0;
        cin >> n;
        vector<long long> input(n);
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (input[i] * input[j] == input[k] || input[i] * input[k] == input[j] || input[j] * input[k] == input[i])
                    {
                        res++;
                    }
                }
            }
        }
        cout << "Case #" << l << ": " << res << "\n";
    }
    return 0;
}