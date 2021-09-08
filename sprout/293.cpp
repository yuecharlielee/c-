#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct node
{
    vector<int> side;
    int max; //最大子樹節點值
    int sum;
    bool visit;
};

int dfs(vector<node> &data, int n)
{
    data[n].visit = true;
    for (int i = 0; i < data[n].side.size(); i++)
    {
        if (!data[data[n].side[i]].visit)
        {
            int t = dfs(data, data[n].side[i]);
            data[n].sum += t;
            data[n].max = max(data[n].max, t);
        }
    }
    return data[n].sum + 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        //scanf("%d", &n);
        cin >> n;
        vector<node> thenode;
        for (int i = 0; i < n; i++)
        {
            node tmp;
            tmp.max = 0;
            tmp.sum = 0;
            tmp.visit = false;
            tmp.side.clear();
            thenode.push_back(tmp);
        }
        for (int i = 0; i < n - 1; i++)
        {
            int a, b;
            //scanf("%d %d", &a, &b);
            cin >> a >> b;
            thenode[a].side.push_back(b);
            thenode[b].side.push_back(a);
        }
        dfs(thenode, 0);
        int smallest_node = n;
        int tmpi;
        for (int i = 0; i < n; i++)
        {
            int tmp = max(thenode[i].max, n - thenode[i].sum - 1);
            if (tmp < smallest_node)
            {
                smallest_node = tmp;
                tmpi = i;
            }
            else if (tmp == smallest_node && i < tmpi)
            {
                tmpi = i;
            }
        }
        cout << tmpi << "\n";
    }
    return 0;
}
