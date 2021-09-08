#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int p, n;
    float r, sum = 0;
    cout << "請輸入本金: ";
    cin >> p;
    cout << "請輸入年利率: ";
    cin >> r;
    cout << "請輸入總年份: ";
    cin >> n;
    cout << "年份\t本利和\n";
    if (n > 3)
    {
        for (int i = 1; i <= 3; i++)
        {
            printf("%4d\t%.2f\n", i, p * pow((1 + r), i));
            if (i == 3)
            {
                sum = p *pow((1 + r), i);
            }
        }
        sum -= 500;
        for (int i = 1; i <= n - 3; i++)
        {
            printf("%4d\t%.2f\n", i + 3, sum * pow((1 + r), i));
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%4d\t%.2f\n", i, p * pow((1 + r), i));
        }
    }
    system("PAUSE");
    return 0;
}