#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    multiset<int> s;
    int op;
    while (cin >> op)
    {
        if (op == 1)
        {
            int n;
            cin >> n;
            s.insert(n);
        }
        else if (op == 2)
        {
            cout << *(--s.end()) << "\n";
            s.erase(--s.end());
        }
        else
        {
            cout << *(s.begin()) << "\n";
            s.erase(s.begin());
        }
    }

    return 0;
}