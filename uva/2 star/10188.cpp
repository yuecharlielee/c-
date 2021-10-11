#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 1;
    while (cin >> n && n != 0)
    {
        cin.ignore();
        vector<string> solution(n);
        for (int i = 0; i < n; i++)
        {
            getline(cin, solution[i]);
        }
        int m;
        cin >> m;
        cin.ignore();
        vector<string> anwser(m);
        for (int i = 0; i < m; i++)
        {
            getline(cin, anwser[i]);
        }
        string solutioni = "", anwseri = "";
        bool ac = true;
        if (m == n)
        {
            for (int i = 0; i < n; i++)
            {
                if (solution[i] != anwser[i])
                {
                    ac = false;
                }
            }
        }
        else
        {
            ac = false;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < solution[i].size(); j++)
            {
                if (isdigit(solution[i][j]))
                {
                    solutioni += solution[i][j];
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < anwser[i].size(); j++)
            {
                if (isdigit(anwser[i][j]))
                {
                    anwseri += anwser[i][j];
                }
            }
        }
        if (ac)
        {
            cout << "Run #" << count << ": Accepted\n";
        }
        else if (solutioni == anwseri)
        {
            cout << "Run #" << count << ": Presentation Error\n";
        }
        else
        {
            cout << "Run #" << count << ": Wrong Answer\n";
        }
        count++;
    }
    return 0;
}