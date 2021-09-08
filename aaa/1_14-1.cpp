#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, n;
    float r;
    cout << "Please enter principal: ";
    cin >> p;
    cout << "Please enter rate: ";
    cin >> r;
    cout << "Please enter year: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Year Amount\n";
        printf("%4d %.2f\n", i,p * pow((1 + r), i));
    }
    system("PAUSE");
    return 0;
}