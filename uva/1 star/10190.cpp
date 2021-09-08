#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    long long n, m;
    while (cin >> n >> m)
    {
        if (n <= 1 || m <= 1 || m > n)
        {
            cout << "Boring!\n";
            continue;
        }
        bool is_boring = false;
        vector<long long> ans;
        while (n > 1)
        {
            if (n % m != 0)
            {
                is_boring = true;
                break;
            }
            else
            {
                ans.push_back(n);
            }
            n /= m;
        }
        ans.push_back(1);
        if (!is_boring)
        {
            for (int i = 0; i < ans.size(); i++)
            {
                if (i > 0)
                {
                    cout << " ";
                }
                cout << ans[i];
            }
            cout << "\n";
        }
        else
        {
            cout << "Boring!\n";
        }
    }
    system("PAUSE");
    return 0;
}