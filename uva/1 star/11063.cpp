#include <algorithm>
#include <iostream>
#include <math.h>
#include <sstream>
#include <unordered_set>
#include <vector>
using namespace std;
int main()
{
    int n = 0, c = 0;
    while (cin >> n)
    {
        vector<int> in(n, 0), bij(n * n, 0);
        unordered_set<int> a;
        bool is_b2 = true;
        for (int i = 0; i < n; i++)
        {
            cin >> in[i];
            if (in[i] < 1)
            {
                is_b2 = false;
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (in[i] < in[i - 1])
            {
                is_b2 = false;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i ; j < n; j++)
            {
                auto find_a = a.find(in[i] + in[j]);
                if (find_a == a.end())
                {
                    a.insert(in[i] + in[j]);
                }
                else
                {
                    is_b2 = false;
                    break;
                }
            }
        }
        if (is_b2)
        {
            cout << "Case #" << c + 1 << ": It is a B2-Sequence.\n\n";
        }
        else
        {
            cout << "Case #" << c + 1 << ": It is not a B2-Sequence.\n\n";
        }
        c++;
    }
    system("PAUSE");
    return 0;
}