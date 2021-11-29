#include <bits/stdc++.h>
using namespace std;
class call
{
public:
    int time, target, end;
    call() : time(0), target(0), end(0) {}
    call(int time, int target, int duration)
    {
        this->time = time;
        this->target = target;
        this->end = time + duration;
    }
};
vector<call> phone[10000];
bool iscall[10000];
int dfs(int time, int ca)
{
    iscall[ca] = true;
    for (int i = 0; i < phone[ca].size(); i++)
    {
        if (phone[ca][i].time <= time && time <= phone[ca][i].end)
        {
            if (iscall[phone[ca][i].target])
            {
                return 9999;
            }
            return dfs(time, phone[ca][i].target);
        }
    }
    return ca;
}
int main()
{
    int n, tc = 1;
    cin >> n;
    cout << "CALL FORWARDING OUTPUT\n";
    while (n--)
    {
        cout << "SYSTEM " << tc++ << "\n";
        int t, tar, dur, ca, time;
        for (int i = 0; i < 10000; i++)
        {
            phone[i].clear();
        }
        while (cin >> ca && ca)
        {
            cin >> t >> dur >> tar;
            phone[ca].push_back(call(t, tar, dur));
        }
        while (cin >> time && time != 9000)
        {
            cin >> ca;
            for (int i = 0; i < 10000; i++)
            {
                iscall[i] = false;
            }
            printf("AT %04d CALL TO %04d RINGS %04d\n", time, ca, dfs(time, ca));
        }
    }
    cout << "END OF OUTPUT\n";
    return 0;
}