#include <iostream>
#include <math.h>
using namespace std;
void deal(int *a)
{
    int sum = 0, count = 0, n, maxpos = 0, minpos = 0;
    cout << "Position selection(0~9)";
    while (cin >> n && n != -1)
    {
        int re = *(a + n);
        cout << "Result:" << re << "\n";
        sum += re;
        count++;
        cout << "Position selection(0~9):";
    }
    for (int i = 0; i < 10; i++)
    {
        if (*(a + i) > *(a + maxpos))
        {
            maxpos = i;
        }
        if (*(a + i) < *(a + minpos))
        {
            minpos = i;
        }
    }
    float avg = (float)sum / count;
    printf("平均為:%.2f\n", avg);
    cout << "最大值為:" << *(a + maxpos) << " 位置為第" << maxpos+1 << "個\n";
    cout << "最小值為:" << *(a + minpos) << " 位置為第" << minpos+1 << "個\n";
}
int main()
{
    int sed = 0, a[10];
    cout << "Please enter seed:";
    cin >> sed;
    srand(sed);
    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 51 + 50;
        cout << a[i] << " ";
    }
    cout << "\n";
    deal(a);
    system("PAUSE");
    return 0;
}