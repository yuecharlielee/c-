#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> dict;
    while (n--)
    {
        string aa;
        cin >> aa;
        dict[aa]++;
    }
    cin >> n;
    while (n--)
    {
        string aa;
        cin >> aa;
        if(dict.find(aa)==dict.end()){
            cout << "no\n";
            dict[aa]++;
        }
        else{
            cout << "yes\n";
        }
    }
    return 0;
}