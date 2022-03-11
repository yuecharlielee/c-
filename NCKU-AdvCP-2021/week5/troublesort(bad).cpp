#include <bits/stdc++.h>
using namespace std;
void t_sort(vector<int> &l)
{
    bool done = 0;
    while (!done)
    {
        done = 1;
        for (int i = 0; i < l.size() - 2; i++)
        {
            if (l[i] > l[i + 2])
            {
                done = 0;
                swap(l[i], l[i + 2]);
            }
        }
    }
    /*for (int i = 0; i < l.size(); i++)
    {
        cout << l[i] << " ";
    }
    cout << "\n";*/
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
        vector<int> a1(m), a2(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a1[i];
        }
        a2 = a1;
        t_sort(a1);
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
