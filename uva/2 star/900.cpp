#include <bits/stdc++.h>
using namespace std;
int dp[51];
void build(){
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i < 51;i++){
        dp[i] = dp[i - 2] + dp[i - 1];
    }
}
int main()
{
    int n;
    build();
    while (cin>>n && n)
    {
        cout <<dp[n]<< "\n";
    }
    return 0;
}