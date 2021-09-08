#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums;
    int testcase_row = 0, n = 0;
    cin >> testcase_row;
    for (int i = 0; i < testcase_row; i++)
    {
        nums.clear();
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int r;
            cin >> r;
            nums.push_back(r);
        }
        sort(nums.begin(), nums.end());
        int mid = nums[n / 2], sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += abs(nums[j] - mid);
        }
        cout << sum << "\n";
    }
    return 0;
}
