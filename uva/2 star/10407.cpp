#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y)
{
    if (x == 0 || y == 0)
    {
        return x + y;
    }
    return gcd(y, x % y);
}
int main()
{
    int first;
    vector<int> input;
    while (cin >> first && first != 0)
    {
        input.clear();
        input.push_back(first);
        while (cin >> first && first != 0)
        {
            input.push_back(first);
        }
        int d = abs(input[1] - input[0]);
        for (int i = 1; i < input.size() - 1; i++)
        {
            d = gcd(d, abs(input[i] - input[i + 1]));
        }
        cout << d << "\n";
    }
    return 0;
}