#include <algorithm>
#include <iostream>
#include <math.h>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    vector<int> poly;
    int x = 0;
    while (cin >> x)
    {
        poly.clear();
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss(s);
        while (ss >> s)
        {
            poly.push_back(stoi(s));
        }
        poly.pop_back();
        reverse(poly.begin(), poly.end());
        int ans = 0;
        int mul = 1;
        for (int i = 0; i < poly.size(); i++)
        {
            ans += poly[i] * (i + 1) * mul;
            mul *= x;
        }
        cout << ans << "\n";
    }
    system("PAUSE");
    return 0;
}