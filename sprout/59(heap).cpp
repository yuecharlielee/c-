#include <cstdlib>
#include <fstream>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <queue>
#include <string>
#include <vector>
#include <functional>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> heap;
    make_heap(heap.begin(), heap.end(),greater<int> ());
    while (t--)
    {
        int op, n;
        cin >> op;
        if (op == 1)
        {
            cin >> n;
            heap.push_back(n);
            push_heap(heap.begin(), heap.end(),greater<int> ());
        }
        else
        {
            if (heap.size() == 0)
            {
                cout << "empty!\n";
            }
            else
            {
                cout << heap.front() << '\n';
                pop_heap(heap.begin(), heap.end(),greater<int> ());
                heap.pop_back();
                
            }
        }
    }
    return 0;
}