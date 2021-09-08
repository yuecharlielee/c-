#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cout << "請輸入月份:\n";
    while (cin>>n && n!=-1)
    {
        if(n<1 || n>12){
            cout << "請重新輸入一個月份\n";
            continue;
        }
        else if(n==1 || n==11 || n==12){
            cout << "此月份為冬天\n";
        }
        else if(n>=2 && n<=4){
            cout << "此月份為春天\n";
        }
        else if(n>=5 && n<=7){
            cout << "此月份為夏天\n";
        }
        else{
            cout << "此月份為秋天\n";
        }
        cout << "請輸入月份:\n";
    }
    system("PAUSE");
    return 0;
}