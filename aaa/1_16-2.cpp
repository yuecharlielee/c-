#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n = 0, guess = 0, max = 100, min = 0;
    cout << "設定終極密碼(1~99):";
    cin >> guess;
    cout << "輸入猜測數值(1~99):";
    while (cin >> n && n != guess)
    {
        if(n>=max || n<=min){
            cout << "輸入數值超出範圍，請重新輸入:";
        }
        else if(n>guess){
            max = n;
            cout << "答錯，目前範圍為" << min << "~" << max << "\n";
            cout << "請重新輸入:";
        }
        else{
            min = n;
            cout << "答錯，目前範圍為" << min << "~" << max << "\n";
            cout << "請重新輸入:";
        }
    }
    cout << "恭喜猜對，終極密碼為" << guess;
    system("PAUSE");
    return 0;
}