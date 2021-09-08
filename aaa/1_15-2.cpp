#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0,sum=0;
    float count = 0.0;
    cout << "請輸入分數:";
    while (cin>>n && n!=-1)
    {
        sum += n;
        count++;
        cout << "請輸入分數:";
    }
    cout << "分數總和為:" << sum<<"\n";
    float ans =float(sum / count);
    printf("分數平均為%.2f\n", ans);
    system("PAUSE");
    return 0;
}