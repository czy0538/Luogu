#include <iostream>
using namespace std;
int main()
{
    int money = 0;
    int mom = 0;
    for (int i = 0; i < 12; ++i)
    {
        money += 300;
        int temp;
        cin >> temp;
        money -= temp;
        if (money < 0)
        {
            cout << -(i + 1) << endl;
            return 0;
        }
        else
        {
            int t = money / 100;
            money -= (t * 100);
            mom += (t * 100);
        }
    }
    cout << mom + mom * 0.2+money;
    return 0;
}