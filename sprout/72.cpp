#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
vector<double> a, b, c;
int n;
double s(double t)
{
    double maxx;
    for (int i = 0; i < n; i++)
    {
        maxx = max(maxx, a[i] * (t - b[i]) * (t - b[i]) + c[i]);
    }
    return maxx;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        double ai, bi, ci;
        cin >> n;
        a.clear();
        b.clear();
        c.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> ai >> bi >> ci;
            a.push_back(ai);
            b.push_back(bi);
            c.push_back(ci);
        }
        double w = 0, x, y, z = 300;
        for (int i = 0; i < 100; i++)
        {
            x = (z - w) / 3.0 + w;
            y = z - (z - w) / 3.0;
            if (s(w) < s(x) && s(x) < s(y) && s(y) < s(z))
            {
                z = y;
            }
            else if (s(w) > s(x) && s(x) < s(y) && s(y) < s(z))
            {
                z = y;
            }
            else if (s(w) > s(x) && s(x) > s(y) && s(y) < s(z))
            {
                w = x;
            }
            else if(s(w) > s(x) && s(x) > s(y) && s(y) > s(z)){
                w = x;
            }
            else{
                w = x;
                z = y;
            }
        }
        cout << fixed << setprecision(5) << s(w) << "\n";
    }

    return 0;
}