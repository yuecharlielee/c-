#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void BubbleSort(int *a)
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
    int sed;
    cout << "Please enter seed:";
    cin >> sed;
    srand(sed);
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        int x = rand() % 101;
        a[i] = x;
        cout << x << " ";
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