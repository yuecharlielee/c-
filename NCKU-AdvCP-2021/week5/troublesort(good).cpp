#include <bits/stdc++.h>
using namespace std;
vector<int> t_sort(vector<int> &m1, vector<int> &m2, int m)
{
    vector<int> a1(m);
    sort(m1.begin(), m1.end());
    sort(m2.begin(), m2.end());
    int idx = 0;
    for (int i = 0; i < m / 2; i++)
    {
        a1[idx++] = m1[i];
        a1[idx++] = m2[i];
    }
    if (m & 1)
    {
        a1[idx] = m1[m1.size() - 1];
    }
    return a1;
}
int main()
{
    int n, count = 0;
    cin >> n;
    while (n--)
    {
        count++;
        int m;
        bool flag = true;
        cin >> m;
        vector<int> a1(m), a2(m), m1(ceil(a1.size() / 2.0)), m2(floor(a1.size() / 2.0));
        ;
        for (int i = 0; i < m / 2; i++)
        {
            cin >> m1[i] >> m2[i];
        }
        if (m & 1)
        {
            cin >> m1[m / 2];
        }
        /*for(auto i:m1){
            cout << i << " ";
        }
        cout << " ";
        for(auto i:m2){
            cout << i << " ";
        }
        cout << "\n";*/
        a1 = t_sort(m1, m2, m);
        a2 = a1;
        sort(a2.begin(), a2.end());
        for (int i = 0; i < m; i++)
        {
            if (a1[i] != a2[i])
            {
                flag = false;
                cout << "Case #" << count << ": " << i << "\n";
                break;
            }
        }
        if (flag)
        {
            cout << "Case #" << count << ": OK\n";
        }
    }
    return 0;
}
