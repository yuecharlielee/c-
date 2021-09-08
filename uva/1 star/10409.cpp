#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    while (cin>>n)
    {
        if(n==0){
            break;
        }
        string forward = "";
        vector<int> face = {1, 6, 2, 3, 5, 4};
        while (n--)
        {
            cin >> forward;
            if(forward=="north"){
                int t = face[0];
                face[0] = face[4];
                face[4] = face[1];
                face[1] = face[2];
                face[2] = t;
            }
            if(forward=="west"){ //1-4-6-3 -> 4-6-3-1
                int t = face[5];
                face[5] = face[1];
                face[1] = face[3];
                face[3] = face[0];
                face[0] = t;
            }
            if(forward=="south"){ //1-2-6-5  -> 2-6-5-1
                int t = face[0];
                face[0] = face[2];
                face[2] = face[1];
                face[1] = face[4];
                face[4] = t;
            }
            if(forward=="east"){//1-4-6-3 -> 3-1-4-6
                int t = face[3];
                face[3] = face[1];
                face[1] = face[5];
                face[5] = face[0];
                face[0] = t;
            }
        }
        cout << face[0] << "\n";
    }
    system("PAUSE");
    return 0;
}