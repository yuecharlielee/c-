#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 5; i <= 13; i += 2)
    {
        for (int j = 0; j < (13 - i) / 2; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 11; i >0; i -= 2)
    {
        for (int j = 0; j < (13 - i) / 2; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    system("PAUSE");
    return 0;
}