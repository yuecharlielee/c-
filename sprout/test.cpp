#include <bits/stdc++.h>
using namespace std;
vector<int> a(50000),b(50000);

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int nn;
        cin >> nn;
        a[i] = nn;
        b[i] = nn;
        //a.push_back(nn);
        //b.push_back(nn);
    }
    //mergesort(0, a.size());
    cout << counting(0,n) % 10000019 << "\n";
    return 0;
}