#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int carry = 0;
    cin >> a >> b;
    
    while(a != 0 && b != 0){
      int c = 0;
      carry = 0;
      while(a > 0 || b > 0){
        //cout << b << " ";
        //cout << carry << endl;
        carry = carry + a%10 + b%10;
        //cout << a%10 << " " << b%10 << endl; 
        //cout << carry << endl;
        
        if(carry >= 10){
          c++;
          //cout << c << endl;
          carry = carry/10;
        }else{
          carry = 0;
        }

        a = a/10;
        b = b/10;
        //cout << b << endl;
        
      }
      if( c== 0){
        cout << "No carry operation." << endl;
      }
      if(c == 1){
        cout << "1 carry operation." << endl;
      }
      if(c > 1){
        cout << c << " carry operations." << endl;
      }
      
      cin >> a >> b;
    }

    return 0;
    
}