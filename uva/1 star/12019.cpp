#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int month, day, n;
    vector<int> month_days;
    month_days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> weekday = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> month >> day;
        int days = 0;
        if (month > 1)
        {
            for (int j = 1; j < month ; j++)
            {
                days += month_days[j-1];
            }
        }
        days += day - 1;
        cout << weekday[(days + 5) % 7] << "\n";
    }
    system("PAUSE");
    return 0;
}