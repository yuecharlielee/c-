#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int count = 0;
    string a;
    while (getline(cin, a) && a != "")
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '\"')
            {
                count++;
                if (count % 2 == 1)
                {
                    a.erase(i, 1);
                    a.insert(i, "``");
                }
                else
                {
                    a.erase(i, 1);
                    a.insert(i, "''");
                }
            }
        }
        for (auto i : a)
        {
            cout << i;
        }
        cout << "\n";
    }
    system("PAUSE");
    return 0;
}