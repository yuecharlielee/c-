#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        priority_queue<long, vector<long>, greater<long>> data;
        while (n--)
        {
            long newdata;
            cin >> newdata;
            data.push(newdata);
        }
        long long int cost = 0, x;
        while (data.size() != 1)
        {
            x = data.top();
            data.pop();
            x += data.top();
            data.pop();
            cost += x;
            data.push(x);
        }

        cout << cost << "\n";
    }
    return 0;
}