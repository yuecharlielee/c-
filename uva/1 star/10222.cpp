#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string a;
    string keyboard = "1234567890-=qwertyuiop[]asdfghjkl;'\zxcvbnm,./";
    while (getline(cin, a))
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == ' ')
            {
                cout << " ";
                continue;
            }
            for (int j = 0; j < keyboard.size(); j++)
            {
                if (tolower(a[i]) == keyboard[j])
                {
                    cout << keyboard[j - 2];
                    break;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}