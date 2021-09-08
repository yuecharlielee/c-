#include <iostream>
#include <map>
#include <vector>
using namespace std;
int binarytoint(string a)
{
    int ans = 0, n = 1;
    for (int i = 0; i < a.size(); i++)
    {
        ans <<= 1;
        ans += a[i] - '0';
    }
    return ans;
}
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
    //題目為求s1,s2轉數字後的最大公因數
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int a1 = binarytoint(s1), a2 = binarytoint(s2);
        int gcd_num = gcd(a1, a2);
        cout << "Pair #" << i + 1 << ": ";
        if (gcd_num != 1)
        {
            cout << "All you need is love!\n";
        }
        else
        {
            cout << "Love is not all you need!\n";
        }
    }
    system("PAUSE");
    return 0;
}