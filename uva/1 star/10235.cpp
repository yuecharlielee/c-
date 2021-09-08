#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<bool> is_prime(1000005, true);
    is_prime[0] = false;
    is_prime[1] = false;
    for (int i = 2; i < 1000000; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * 2; j < 1000000; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    int n;
    while (cin >> n)
    {
        if (!is_prime[n])
        {
            cout << n << " is not prime.\n";
        }
        else
        {
            string str_n = to_string(n);
            reverse(str_n.begin(), str_n.end());
            int ren = stoi(str_n);
            if (ren != n && is_prime[ren])
            {
                cout << n << " is emirp.\n";
            }
            else
            {
                cout << n << " is prime.\n";
            }
        }
    }
    system("PAUSE");
    return 0;
}