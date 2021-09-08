#include <algorithm>
#include <iostream>
#include <limits.h>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            cout << "\n";
        }
        vector<int> cost(36, 0);
        unordered_map<int, int> cost_map;
        for (int j = 0; j < 36; j++)
        {
            int cost_a;
            cin >> cost_a;
            cost_map[j] = cost_a;
        }
        int q_num;
        cin >> q_num;
        cout << "Case " << i + 1 << ":\n";
        for (int j = 0; j < q_num; j++)
        {
            int test_case;
            int min_base = INT_MAX;
            unordered_map<int, int> ans;
            cin >> test_case;
            cout << "Cheapest base(s) for number " << test_case << ":";
            for (int k = 2; k <= 36; k++)
            {
                int x = test_case;
                int sum = 0;
                while (x > 0)
                {
                    sum += cost_map[x % k];
                    x /= k;
                }
                ans[k] = sum;
                min_base = min(sum, min_base);
            }
            for (int k = 2; k <= 36; k++)
            {
                if (ans[k] == min_base)
                {
                    cout << " " << k;
                }
            }
            cout << "\n";
        }
    }
    system("PAUSE");
    return 0;
}