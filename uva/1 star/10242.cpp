#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s) && s != "")
    {
        stringstream ss(s);
        vector<double> x(4, 0);
        vector<double> y(4, 0);
        double ansx = 0.0, ansy = 0.0;
        for (int i = 0; i < 4; i++)
        {
            ss >> x[i] >> y[i];
            ansx += x[i];
            ansy += y[i];
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (x[i] == x[j] && y[i] == y[j])
                {
                    cout << fixed << setprecision(3);
                    cout << ansx - 3 * x[i] << " " << ansy - 3 * y[i] << "\n";
                }
            }
        }
    }
    system("PAUSE");
    return 0;
}