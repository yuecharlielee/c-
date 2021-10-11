#include <bits/stdc++.h>
using namespace std;
vector<long long> prime;
vector<long long> bigprime;
long long visit[50000];
void get_prime()
{
    for (long long i = 2; i < 50000; i++)
    {
        if (!visit[i])
        {
            prime.push_back(i);
            //prime[count++]=i;
            for (long long j = 2 * i; j < 50000; j += i)
            {
                visit[j] = true;
            }
        }
    }
}
bool is_prime(long long n)
{
    if(n==1){
        return false;
    }
    if (n < 50000)
    {
        return !visit[n];
    }
    for (long long i = 0; i < prime.size(); i++)
    {
        if (n % prime[i] == 0)
        {
            return false;
        }
    }
    return true;
}
void get_bigprime(long long l, long long u)
{
    bigprime.clear();
    for (long long i = l; i <= u; i++)
    {
        if (is_prime(i))
        {
            bigprime.push_back(i);
        }
    }
}
int main()
{
    get_prime();
    long long l, u;
    while (cin >> l >> u)
    {
        get_bigprime(l, u);
        if (bigprime.size() < 2)
        {
            cout << "There are no adjacent primes.\n";
            continue;
        }
        long long closest_a = 0, closest_b = __LONG_LONG_MAX__, distant_a = 0, distant_b = 0;
        for (long long i = 1; i < bigprime.size(); i++)
        {
            if ((bigprime[i] - bigprime[i - 1]) > (distant_b - distant_a))
            {
                distant_a = bigprime[i - 1];
                distant_b = bigprime[i];
            }
            if ((bigprime[i] - bigprime[i - 1]) < (closest_b - closest_a))
            {
                closest_a = bigprime[i - 1];
                closest_b = bigprime[i];
            }
        }
        cout << closest_a << "," << closest_b << " are closest, " << distant_a << "," << distant_b << " are most distant.\n";
    }
    return 0;
}