#include <algorithm>
#include <iostream>
#include <math.h>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
        {
            break;
        }
        int count_square = 0;
        for (int i = a; i <= b; i++)
        {
            float sqrt_i = pow(i, 0.5);
            if(i/sqrt_i==int(i/sqrt_i)){
                count_square++;
            }
        }
        cout << count_square << "\n";
    }
    system("PAUSE");
    return 0;
}