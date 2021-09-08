#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int get_times(int a, int count)
{
    while (a != 1)
    {
        if (a % 2 == 1)
        {
            a = 3 * a + 1;
        }
        else
        {
            a /= 2;
        }
        count++;
    }
    return count;
}
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        int max_times = 0;
        cout << a << " " << b << " ";
        if (a > b)
        {
            swap(a, b);
        }
        for (int i = a; i <= b; i++)
        {
            int length = get_times(i, 1);
            max_times = max(length, max_times);
        }
        cout << max_times << "\n";
    }
    return 0;
}