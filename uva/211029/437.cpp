#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> a[3];
        while (n--)
        {
            int x, y, z;
            cin >> x >> y >> z;
            a[0].push_back(x);
            a[1].push_back(y);
            a[2].push_back(z);
        }
        for (int i = 0; i < 3; i++)
        {
            for (auto h:a[i])
            {
                cout << h << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}