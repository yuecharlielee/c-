#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        double sum = 0.0;
        vector<double> stu(n, 0.0);
        for (int i = 0; i < n; i++)
        {
            cin >> stu[i];
            sum += stu[i];
        }
        double ave = sum / n;
        ave = (int)(ave * 100) / 100.0;
        double excha = 0.0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (stu[i] > ave + 0.01)
            {
                count++;
                excha += stu[i] - ave - 0.01;
            }
        }
        if (0.01 * count > sum - ave * n)
        {
            excha += 0.01 * count - (sum - ave * n);
        }
        printf("$%.2f\n", excha);
    }

    return 0;
}