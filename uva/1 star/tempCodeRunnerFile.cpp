#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void banglg(long long int n)
{
    if (n >= 10000000)
    {
        banglg(n / 10000000);
        cout << " kuti ";
        n %= 10000000;
    }
    if (n >= 100000)
    {
        banglg(n / 100000);
        cout << " lakh ";
        n %= 100000;
    }
    if (n >= 1000)
    {
        banglg(n / 1000);
        cout << " hajar ";
        n %= 1000;
    }
    if (n >= 100)
    {
        banglg(n / 100);
        cout << " shata ";
        n %= 100;
    }
    if (n > 0)
    {
        cout << n ;
    }
}
int main()
{
    long long int a;
    int no = 1;
    string ans;
    while (cin >> a)
    {
        cout << no << ". ";
        banglg(a);
        cout << "\n";
        no++;
    }
    return 0;
}