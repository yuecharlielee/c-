#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int l = 1; l <= t; l++)
    {
        int n;
        cin >> n;
        vector<long long> input(n);
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        sort(input.begin(), input.end());
        long long count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1 + i; j < n; j++)
            {

                long long goal = input[i] * input[j];
                long long pos1 = lower_bound(input.begin()+j+1, input.end(), goal) - input.begin(); // return an iterator pointing to the first element not compare less than val
                long long pos2 = upper_bound(input.begin()+j+1, input.end(), goal) - input.begin(); // return an iterator pointing to the first element greater than val
                if (pos1 == n)
                {
                    continue;
                }
                else if (input[pos1] > goal)
                {
                    continue;
                }
                else
                {
                    count += pos2 - pos1;
                }
            }
        }
        long long pos1 = lower_bound(input.begin(), input.end(), 0) - input.begin();
        long long pos2 = upper_bound(input.begin(), input.end(), 0) - input.begin();
        if (pos1 != n && pos2 != n && input[pos1] == 0)//at least 2 zeros
        {
            if (pos2 - pos1 >= 2)
            {
                long long tmp = (pos2 - pos1) * (pos2 - pos1 - 1) / 2 * (n - pos2);
                count += tmp;
            }
        }
        cout << "Case #" << l << ": " << count << "\n";
    }
    return 0;
}