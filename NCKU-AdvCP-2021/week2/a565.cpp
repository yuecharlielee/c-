#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        stack<char> pq;
        int count = 0;
        string s;
        cin >> s;
        for (auto i : s)
        {
            if (i == 'p')
            {
                pq.push('p');
            }
            if (i == 'q')
            {
                if (!pq.empty())
                {
                    pq.pop();
                    count++;
                }
            }
        }
        cout << count << "\n";
    }

    return 0;
}