#include <algorithm>
#include <iostream>
#include <math.h>
#include <sstream>
#include <unordered_set>
#include <vector>
using namespace std;
int main()
{
    string n;
    while (cin >> n)
    {
        int temp = 0, sum = 0, max_num = 1;
        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] >= '0' && n[i] <= '9')
            {
                temp = n[i] - '0';
            }
            else if (n[i] >= 'A' && n[i] <= 'Z')
            {
                temp = n[i] - 'A' + 10;
            }
            else if (n[i] >= 'a' && n[i] <= 'z')
            {
                temp = n[i] - 'a' + 36;
            }
            else
            {
                continue;
            }
            max_num = max(max_num, temp);
            sum += temp;
        }
        int i = 0;
        for (i = max_num; i < 62; i++)
        {
            if (sum % i == 0)
            {
                cout << i + 1 << "\n";
                break;
            }
        }
        if (i == 62)
        {
            cout << "such number is impossible!\n";
        }
    }

    system("PAUSE");
    return 0;
}