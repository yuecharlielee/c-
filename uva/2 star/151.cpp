#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()//Josephus Problem f[i+1] = (f[i]+m)%i
{
    int n;
    while (cin>>n && n!=0)
    {
        for (int i = 1; i < n;i++){
            int k = 0;
            for (int j = 1; j < n;j++){
                k = (k + i) % j;
            }
            if(k==11){
                cout << i << "\n";
                break;
            }
        }
    }
    system("PAUSE");
    return 0;
}