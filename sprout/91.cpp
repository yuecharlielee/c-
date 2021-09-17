#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    vector<long long> factor = {2, 3, 5, 7};
    vector<long long> ex = {0, 0, 0, 0};
    cin >> t;
    while (t--)
    {
        string res = "";
        long long n;
        cin >> n;
        if (n == 1)
        {
            cout << n << "\n";
            continue;
        }
        for (int i = 0; i < 4; i++)
        {
            int count = 0;
            while (!(n % factor[i]))
            {
                n /= factor[i];
                count++;
            }
            ex[i] = count;
        }
        if (n > 10)
        {
            cout << "-1\n";
            continue;
        }
        while (ex[1]>=2)//9
        {
            ex[1] -= 2;
            res.push_back('9');
        }
        while (ex[0]>=3)//8
        {
            ex[0] -= 3;
            res.push_back('8');
        }
        while (ex[3]>0)
        {
            ex[3]--;
            res.push_back('7');
        }
        while (ex[0]>=1 && ex[1]>=1)
        {
            ex[0]--;
            ex[1]--;
            res.push_back('6');
        }
        while (ex[2]>0)
        {
            ex[2]--;
            res.push_back('5');
        }
        while (ex[0]>=2)
        {
            ex[0] -= 2;
            res.push_back('4');
        }
        while (ex[1]>0)
        {
            ex[1]--;
            res.push_back('3');
        }
        while (ex[0]>0)
        {
            ex[0]--;
            res.push_back('2');
        }
        reverse(res.begin(),res.end());
        cout << res << "\n";
    }

    return 0;
}