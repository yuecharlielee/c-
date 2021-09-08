#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin >> n;
    cin.ignore();
    string a;
    getline(cin, a);
    while (n--)
    {
        if(count>0){
            cout << "\n";
        }
        string s;
        int total = 0;
        map<string, int> data;
        while (getline(cin, s) && s != "")
        {
            data[s]++;
            total++;
        }
        for (auto i : data)
        {
            cout << i.first << " " << fixed << setprecision(4) << (double)i.second / total * 100 << "\n";
        }
        count++;
    }
    system("PAUSE");
    return 0;
}