#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << abs(a - b) << "\n";
    }
    return 0;
}