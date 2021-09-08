#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << "Case " << i + 1 << ": ";
        long long count = 0;
        for (int j = 0; j < x1 + y1; j++)
        {
            count -= j + 1;
        }
        count -= x1 + 1;
        for (int j = 0; j < x2 + y2; j++)
        {
            count += j + 1;
        }
        count += x2 + 1;
        cout << count << "\n";
    }
    system("PAUSE");
    return 0;
}