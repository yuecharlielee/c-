#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Please enter line number:";
    cin >> n;
    for (int i = 0; i < n; i += 2)
    {
        for (int j = 0; j < (n - i) / 2; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (n - i) / 2; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = n - 4; i >= 0; i -= 2)
    {
        for (int j = 0; j < (n - i) / 2; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (n - i) / 2; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    system("PAUSE");
    return 0;
}