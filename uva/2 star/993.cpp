#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        if (num == 1)
        {
            cout << "1\n";
            continue;
        }
        if(num==0){
            cout << "0\n";
            continue;
        }
        string res = "";
        for (int i = 9; i > 1; i--)
        {
            while (num % i == 0)
            {
                num /= i;
                res += to_string(i);
            }
        }
        reverse(res.begin(), res.end());
        if (num != 1)
        {
            cout << "-1\n";
        }
        else
        {
            cout << res << "\n";
        }
    }
    return 0;
}