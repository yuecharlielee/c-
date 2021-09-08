#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, m;
    cin >> n;
    list<int> no;
    for (int i = 0; i < n; i++)
    {
        no.push_back(i + 1);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int operate, operate_no;
        cin >> operate >> operate_no;
        if (operate == 0)
        {
            no.remove(operate_no);
        }
        else if (operate == 1 && *no.begin() != operate_no)
        {
            auto first = no.begin();
            auto second = next(first);
            while (*second != operate_no)
            {
                first++;
                second++;
            }
            swap(*first, *second);
        }
    }
    for (list<int>::iterator j = no.begin(); next(j) != no.end(); j++)
    {
        cout << *j << " ";
    }
    cout << *no.end() << "\n";
    return 0;
}