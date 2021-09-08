#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int t, p, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> hi;
        cin >> n >> p;
        for (int j = 0; j < p; j++)
        {
            int h;
            cin >> h;
            hi.push_back(h);
        }
        int hartal = 0;
        for (int j = 1; j <= n; j++)
        {
            if (j % 7 == 6 || j % 7 == 0)
            {
                continue;
            }
            else
            {
                for (int k = 0; k < p; k++)
                {
                    if (j % hi[k] == 0)
                    {
                        hartal++;
                        break;
                    }
                }
            }
        }
        cout << hartal << "\n";
    }
    system("PAUSE");
    return 0;
}