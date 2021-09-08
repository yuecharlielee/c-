#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        int m;
        cin >> m;
        int b1 = 0, b2 = 0, x1 = m;
        string bin = "";
        while (x1 > 0)
        {
            if (x1 % 2 == 1)
            {
                b1++;
            }
            x1 /= 2;
        }
        string x2 = to_string(m);
        for (int i = 0; i < x2.size(); i++)
        {
            int hex = x2[i] - '0';
            while (hex > 0)
            {
                if (hex % 2 == 1)
                {
                    b2++;
                }
                hex /= 2;
            }
        }
        cout << b1 << " " << b2 << "\n";
    }
    system("PAUSE");
    return 0;
}