#include <bits/stdc++.h>
using namespace std;
void exEuclidean(int a, int b, int &x, int &y, int &d)
{
    if (b == 0)
    {
        d = a;
        x = 1;
        y = 0;
    }
    else
    {
        exEuclidean(b, a % b, y, x, d);
        y -= x * (a / b);
    }
}
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        int x, y, d;
        exEuclidean(a, b, x, y, d);
        cout << x << " " << y << " " << d << "\n";
    }
    system("PAUSE");
    return 0;
}