#include <bits/stdc++.h>
using namespace std;
//vector<int> a(50000), b(50000);
int a[45678], b[45678];
void mergesort(int left, int right)
{
    if (left + 1 == right)
    {
        return;
    }
    int mid = (left + right) / 2;
    mergesort(left, mid);
    mergesort(mid, right);

    int l = left, r = mid, k = left;
    while (l < mid || r < right)
    {
        if (l < mid && (r >= right || a[l] <= a[r]))
        {
            b[k++] = a[l++];
        }
        else
        {
            b[k++] = a[r++];
        }
    }
    for (int i = left; i < right; i++)
    {
        a[i] = b[i];
    }
}
long long counting(int left, int right)
{
    if (left + 1 == right)
    {
        return 0;
    }
    int mid = (left + right) / 2;
    long long sum = counting(left, mid);
    sum += counting(mid, right);
    int l, r = mid;
    for (l = left; l < mid; l++)
    {
        r = mid;
        while (r < right && a[l] > a[r])
        {
            sum += a[l] + a[r];
            r++;
        }
    }
    mergesort(left, right);
    return sum;
}
long long n2(int n)
{
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                ans += a[i] + a[j];
            }
        }
    }
    return ans;
}
int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int nn;
        cin >> nn;
        a[i] = nn;
        b[i] = nn;
        //a.push_back(nn);
        //b.push_back(nn);
    }
    //mergesort(0, a.size());
    //cout << counting(0, n) % 10000019 << "\n";
    cout << n2(n) % 10000019 << "\n";
    return 0;
}