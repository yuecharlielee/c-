#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> lucky;
vector<int> res;
void backtracking(int depth, int last, int n)
{
    if (depth == 6)
    {
        for (int i = 0; i < 6; i++)
        {
            cout << res[i];
            if (i != 5)
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    else
    {
        for (int i = last+1; i < n; i++)
        {
            res[depth] = lucky[i];
            backtracking(depth + 1, i, n);
        }
    }
}
int main()
{
    int n,count=0;
    while (cin >> n && n != 0)
    {
        if(count>0){
            cout << "\n";
        }
        lucky.clear();
        for (int i = 0; i < 6; i++)
        {
            res.push_back(0);
        }
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            lucky.push_back(num);
        }
        backtracking(0, -1, n);
        count++;
    }
    return 0;
}