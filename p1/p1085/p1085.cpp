#include <iostream>
using namespace std;
int main()
{
    int t1, t2;
    int maxf = 0, t = 0; //最大量，最大的天数
    int now = 0;         //记录现在是哪天
    for(int i=0;i<7;++i)
    {
        cin >> t1 >> t2;
        now++;
        if (t1 + t2 > maxf)
            maxf = t1 + t2, t = now;
    }
    cout << t;
    return 0;
}