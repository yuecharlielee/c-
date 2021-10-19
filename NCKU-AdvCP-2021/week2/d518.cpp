#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio();
    std::cin.tie(nullptr);
    int n;
    while (cin >> n)
    {
        map<string, int> dict;
        int count = 1;
        while (n--)
        {
            string aa;
            cin >> aa;
            if (dict.find(aa) == dict.end())
            {
                dict[aa] = count;
                cout << "New! " << count << "\n";
                count++;
                
            }
            else
            {
                cout << "Old! " << dict[aa] << "\n";
            }
        }
    }
    return 0;
}