#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int l;
        cin >> l;
        vector<int> data(l, 0);
        for (int i = 0; i < l; i++)
        {
            cin >> data[i];
        }
        int count = 0;
        for (int i = 0; i < l - 1; i++)
        {
            for (int j = 0; j < l - 1 - i; j++)
            {
                if (data[j] > data[j+1])
                {
                    swap(data[j], data[j + 1]);
                    count++;
                }
            }
        }
        cout << "Optimal train swapping takes " << count << " swaps.\n";
    }
    system("PAUSE");
    return 0;
}