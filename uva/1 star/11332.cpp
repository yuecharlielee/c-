#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string a;
    while (cin >> a)
    {
        if (a == "0")
        {
            break;
        }
        while (a.size() > 1)
        {
            int f = 0;
            for (int i = 0; i < a.size(); i++)
            {
                f += a[i] - '0';
            }
            a = to_string(f);
        }
        cout << a << "\n";
    }
    system("PAUSE");
    return 0;
}