//#2019Äê6ÔÂ9ÈÕ 19:19:43
#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned a, b, c;
	cin >> a >> b >> c;
	unsigned c1, c2, c3;
	c1 = max(a, (b, c));
	c2 = min(a, (b, c));
	if (c1 % c2)
		cout << c2 << "/" << c1;
	else
	{
		for (int i = 2; i < c2; ++i)
			if (!(c1 % i) && !(c2 % i))
				c3 = i;
		cout << c2 / c3 << "/" << c1 / c3;
	}
	return 0;
}