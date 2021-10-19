#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n;
    int v[50];
    while (n--)
    {
        cin >> m;
        
        if (m > 50) // because ai<1e9 and the smallest three edge to be triangle is Fibonacci =>when m>45 must can be a triangle
        {
            cout << "YES\n";
            cin.ignore();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                cin >> v[i];
            }
            sort(v, v + m);
            bool tri = false;
            for (int i = 0; i < m - 2; i++)
            {
                if (v[i] + v[i + 1] > v[i + 2])
                {
                    tri = true;
                    break;
                }
            }
            if (tri)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}