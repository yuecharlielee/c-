#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s = "";
        getline(cin, s);
        unordered_map<char, string> dict{
            {'c', "0111001111"},
            {'d', "0111001110"},
            {'e', "0111001100"},
            {'f', "0111001000"},
            {'g', "0111000000"},
            {'a', "0110000000"},
            {'b', "0100000000"},
            {'C', "0010000000"},
            {'D', "1111001110"},
            {'E', "1111001100"},
            {'F', "1111001000"},
            {'G', "1111000000"},
            {'A', "1110000000"},
            {'B', "1100000000"},
        };
        vector<int> times(10, 0);
        for (int i = 0; i < s.size();i++){
            string prestr="0000000000";
            if(i>0){
                prestr = dict[s[i - 1]];
            }
            string nowchars = dict[s[i]];
            for (int j = 0; j < 10;j++){
                if(nowchars[j]=='1' && (nowchars[j]!=prestr[j])){
                    times[j]++;
                }
            }
        }
        for (int i = 0; i < 10;i++){
            cout << times[i];
            if(i!=9){
                cout << " ";
            }
        }
        cout << "\n";
    }
    system("PAUSE");
    return 0;
}