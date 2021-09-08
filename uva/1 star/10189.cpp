#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, count = 1;
    while (cin >> n >> m)
    {
        
        if (n == 0 && m == 0)
        {
            break;
        }
        if (count > 1)
        {
            cout << "\n";
        }
        vector<vector<int>> data;
        vector<int> zero_row(m + 2, 0);
        data.push_back(zero_row);
        for (int i = 1; i <= n; i++)
        {
            vector<int> new_rows(1, 0);
            for (int j = 1; j <= m; j++)
            {
                char s;
                cin >> s;
                if (s == '.')
                {
                    new_rows.push_back(0);
                }
                else
                {
                    new_rows.push_back(-99);
                }
            }
            new_rows.push_back(0);
            data.push_back(new_rows);
        }
        data.push_back(zero_row);
        for (int i = 0; i <= n + 1; i++)
        {
            for (int j = 0; j <= m + 1; j++)
            {
                if (data[i][j] < 0)
                {
                    data[i - 1][j]++;
                    data[i][j - 1]++;
                    data[i - 1][j - 1]++;
                    data[i][j + 1]++;
                    data[i - 1][j + 1]++;
                    data[i + 1][j - 1]++;
                    data[i + 1][j + 1]++;
                    data[i + 1][j]++;
                }
            }
        }
        cout << "Field #" << count << ":\n";
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (data[i][j] >= 0)
                {
                    cout << data[i][j];
                }
                else
                {
                    cout << '*';
                }
            }
            cout << "\n";
        }

        count++;
    }

    system("PAUSE");
    return 0;
}