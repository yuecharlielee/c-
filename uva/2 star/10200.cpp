#include <bits/stdc++.h>
using namespace std;
bool is_prime[10000];
bool isprime(int n)
{

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void find_prime()
{
    for (int i = 0; i <= 10000; i++)
    {
        if (isprime(i * i + i + 41))
        {
            is_prime[i] = true;
        }
        else
        {
            is_prime[i] = false;
        }
    }
}

int main()
{
    int a, b;
    find_prime();
    while (cin >> a >> b)
    {
        int count = 0;
        for (int i = a; i <= b; i++)
        {
            if (is_prime[i])
            {
                count++;
            }
        }
        double p = (double)count / (b - a + 1) * (double)100;
        printf("%.2f\n", p + 0.00000005);
    }

    return 0;
}