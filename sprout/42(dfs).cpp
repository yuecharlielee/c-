#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
char map[1002][1002];
void fill(int x, int y)
{
    map[x][y] = '#';
    if (map[x + 1][y] != '#')
    {
        fill(x + 1, y);
    }
    if (map[x - 1][y] != '#')
    {
        fill(x - 1, y);
    }
    if (map[x][y - 1] != '#')
    {
        fill(x, y - 1);
    }
    if (map[x][y + 1] != '#')
    {
        fill(x, y + 1);
    }
}
int main()
{
    int t, h, w, count;
    cin >> t;
    while (t--)
    {
        count = 0;
        cin >> h >> w;
        for (int i = 0; i < 1002; i++)
        {
            for (int j = 0; j < 1002; j++)
            {
                map[i][j] = '#';
            }
        }
        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= w; j++)
            {
                cin >> map[i][j];
            }
        }
        for (int i = 0; i < h + 2; i++)
        {
            for (int j = 0; j < w + 2; j++)
            {
                //cout << map[i][j];
                if (map[i][j] != '#')
                {
                    fill(i, j);
                    count++;
                }
            }
            //cout << "\n";
        }
        cout << count << "\n";
    }

    return 0;
}
