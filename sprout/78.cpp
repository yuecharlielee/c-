#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> data(6, 0);
    while (true)
    {
        bool is_sixzero = true;
        for (int i = 0; i < 6; i++)
        {
            cin >> data[i];
            if (data[i] != 0)
            {
                is_sixzero = false;
            }
        }
        if (is_sixzero)
        {
            break;
        }
        int res = data[5] + data[4] + data[3];
        data[0] -= 11 * data[4];
        data[1] -= 5 * data[3];
        res += data[2] / 4;
        if (data[2] % 4)
        {
            res++;
        }
        switch (data[2] % 4)
        {
        case 0:
            break;
        case 1:
            data[0] -= 7;
            data[1] -= 5;
            break;
        case 2:
            data[0] -= 6;
            data[1] -= 3;
            break;
        case 3:
            data[0] -= 5;
            data[1] -= 1;
            break;
        }
        if (data[1] > 0)
        {
            res += data[1] / 9;
            if (data[1] % 9)
            {
                res++;
            }
            data[0] -= (36 - 4 * (data[1] % 9));
        }
        else if (data[1] < 0)
        {
            data[0] -= (-data[1]) * 4;
        }
        if (data[0] > 0)
        {
            res += data[0] / 36;
            if (data[0] % 36)
            {
                res++;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
