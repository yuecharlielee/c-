#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 0;
    vector<int> data;
    vector<int> dif;
    while (cin >> n)
    {
        bool is_jolly = true;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            data.push_back(a);
        }
        for (int i = 1; i < n; i++)
        {
            dif.push_back(abs(data[i - 1] - data[i]));
        }
        sort(dif.begin(), dif.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (dif[i] != i + 1)
            {
                is_jolly = false;
                break;
            }
        }
        if (is_jolly)
        {
            cout << "Jolly\n";
        }
        else
        {
            cout << "Not jolly\n";
        }
        data.clear();
        dif.clear();
    }
    system("PAUSE");
    return 0;
}