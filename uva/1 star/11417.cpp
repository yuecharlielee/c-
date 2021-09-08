#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    while ((a %= b) != 0 && (b %= a) != 0);
    return a + b;
}
int main()
{
    int n;
    while (cin >> n)
    {
        if(n==0){
            break;
        }
        int g = 0;
        for (int i = 1; i < n;i++){
            for (int j = i + 1; j <= n;j++){
                g += gcd(i,j);
            }
        }
        cout << g << "\n";
    }
    system("PAUSE");
    return 0;
}