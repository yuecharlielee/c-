#include <iostream>
#include <math.h>
using namespace std;
void deal(int (*a)[4])
{
    cout << "後來矩陣:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 0)
            {
                a[j][i] *= 3;
            }
            if (i == 1)
            {
                a[j][i] *= 2;
            }
            if (i == 2)
            {
                a[j][i] *= -1;
            }
            if (i == 3)
            {
                a[j][i] *= 4;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3d ", a[i][j]);
        }
        cout << "\n";
    }
    cout << "經過濾波後的矩陣:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i][j] >= 20)
            {
                a[i][j] = 0;
            }
            if (a[i][j] < 0)
            {
                a[i][j] = abs(a[i][j]);
            }
            printf("%3d ", a[i][j]);
        }
        cout << "\n";
    }
}
int main()
{
    int sed = 0;
    cout << "Please enter seed:";
    cin >> sed;
    srand(sed);
    int a[4][4];
    cout << "原來的矩陣:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            a[i][j] = rand() % 10 + 1;
            printf("%3d ", a[i][j]);
        }
        cout << "\n";
    }
    deal(a);
    system("PAUSE");
    return 0;
}