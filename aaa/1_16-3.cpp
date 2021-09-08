#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void BubbleSort(int* a)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (a[j] < a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
int main()
{
    int sed = 0;
    cout << "Please enter seed:";
    cin >> sed;
    srand(sed);
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 100 + 1;
        cout << a[i] << " ";
    }
    cout << "\n";
    BubbleSort(a);
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    system("PAUSE");
    return 0;
}