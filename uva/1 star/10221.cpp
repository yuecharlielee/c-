#include <bits/stdc++.h>
using namespace std;
int main()
{
    double s, a;
    string t;
    double r = 6440.0;
    double pi = acos(0.0) * 2;
    while (cin >> s >> a >> t)
    {
        if (a > 180.0)
        {
            a = 360.0 - a;
        }
        if (t == "min")
        {
            a /= 60.0;
        }
        double arc = 2 * pi * (r + s)*a / 360;
        double chord = (r + s) * sin(a / 2 / 180 * pi) * 2;
        cout <<fixed<<setprecision(6)<< arc <<" "<< chord << "\n";
    }
    system("PAUSE");
    return 0;
}