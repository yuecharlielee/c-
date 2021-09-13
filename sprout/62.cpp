#include <cstdlib>
#include <fstream>
#include <functional>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <queue>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int sudoku[9][9];
/*void to_remove(int x, int y, vector<char> &num)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (sudoku[i][y] == num[j] || sudoku[x][i] == num[j])
            {
                num[j] = '0';
            }
        }
    }
    int submatirx = x / 3;
    for (int i = x / 3; i < x / 3 + 2; i++)
    {
        for (int j = y / 3; j < y / 3 + 2; j++)
        {
            if (sudoku[i][y] == num[j] || sudoku[x][i] == num[j])
            {
                num[j] = '0';
            }
        }
    }
}*/
bool check(int x, int y, int num)
{
    for (int i = 0; i < 9; i++)
    {
        if (sudoku[i][y] == num || sudoku[x][i] == num)
        {
            return false;
        }
    }
    int startx = x - x % 3;
    int starty = y - y % 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (sudoku[i + startx][j + starty] == num)
            {
                return false;
            }
        }
    }
    return true;
}
bool backtracking(int row, int col)
{
    if (row == 8 && col == 9)
    {
        return true;
    }
    if (col == 9)
    {
        col = 0;
        row++;
    }
    if (sudoku[row][col] > 0)
    {
        return backtracking(row, col + 1);
    }
    for (int i = 1; i <= 9; i++)
    {
        if (check(row, col, i))
        {
            sudoku[row][col] = i;
            if (backtracking(row, col + 1))
            {
                return true;
            }
        }
        sudoku[row][col] = 0;
    }
    return false;
}

int main()
{
    string s;
    while (cin >> s && s != "end")
    {
        stringstream ss(s);
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                char newchar;
                ss >> newchar;
                if (newchar == '.')
                {
                    sudoku[i][j] = 0;
                }
                else
                {
                    sudoku[i][j] = newchar - '0';
                }
            }
        }
        if (backtracking(0, 0))
        {
            for (int i = 0; i < 9; i++)
            {
                for (int j = 0; j < 9; j++)
                {
                    cout << sudoku[i][j];
                }
            }
            cout << "\n";
        }
        else
        {
            cout << "No solution.\n";
        }
    }
    
    return 0;
}