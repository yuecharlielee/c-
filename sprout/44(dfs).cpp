#include <cstdlib>
#include <fstream>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <queue>
#include <string>
#include <vector>
using namespace std;
struct node
{
    int x, y, dist;
};
char input[100][100];
bool visit[100][100];
int movex[4] = {-1, 0, 1, 0}, movey[4] = {0, 1, 0, -1};

int main()
{
    int n;
    string s;
    while (cin >> n && n != 0)
    {
        queue<node> cat;
        for (int i = 0; i < 100; i++) //reset
        {
            for (int j = 0; j < 100; j++)
            {
                visit[i][j] = false;
            }
        }
        cin.ignore();
        for (int i = 0; i < n; i++)
        {
            getline(cin, s);
            for (int j = 0; j < s.size(); j++)
            {
                input[i][j] = s[j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < s.size(); j++)
            {
                if (input[i][j] == 'K')
                {
                    cat.push((node){i, j, 0});
                    visit[i][j] = true;
                    break;
                }
            }
        }
        int res = INT_MAX;
        while (!cat.empty())
        {
            int x = cat.front().x;
            int y = cat.front().y;
            int dist = cat.front().dist;
            cat.pop();
            for (int i = 0; i < 4; i++)
            {
                if (!visit[x + movex[i]][y + movey[i]])
                {
                    visit[x + movex[i]][y + movey[i]] = true;
                    if (input[x + movex[i]][y + movey[i]] == '#')
                    {
                        continue;
                    }
                    if(input[x + movex[i]][y + movey[i]] == '@')
                    {
                        res = min(res,dist + 1);
                        break;
                    }
                    if(input[x + movex[i]][y + movey[i]] == '.')
                    {
                        cat.push((node){x + movex[i], y + movey[i], dist + 1});
                    }
                }
            }
        }

        if (res == INT_MAX)
        {
            cout << "= =\"\n";
        }
        else
        {
            cout << res << "\n";
        }
    }
    return 0;
}
