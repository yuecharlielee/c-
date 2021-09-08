#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
    int s = 0;
    while (cin >> s)
    {
        for (int i = 0; i < s; i++)
        {
            int n, i_player;
            double p;
            cin >> n >> p >> i_player;
            double q = 1 - p;
            double ans = p * pow(1 - p, i_player - 1) / (1 - pow(1 - p, n));
            if (p == 0)
            {
                cout << "0.0000\n";
            }
            else
            {
                printf("%.4lf\n", ans);
            }
        }
    }
    system("PAUSE");
    return 0;
}