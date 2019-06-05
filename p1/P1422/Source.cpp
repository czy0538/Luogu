//2019Äê6ÔÂ5ÈÕ 10:47:58
#include<bits/stdc++.h>
using namespace std;
const double a = 0.4463;
const double b = 0.4663;
const double c = 0.5663;	
int main()
{
	int n;
	double money = 0;
	cin>> n;
	if (n >400)
	{
		money += (n - 400) * c;
		n = 400;
	}
	if (n > 150)
	{
		money += (n - 150) * b;
		n = 150;
	}
	money += n * a;
	printf("%.1lf", money);
	return 0;
}