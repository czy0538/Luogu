//2019Äê6ÔÂ6ÈÕ 18:26:58
#include<bits/stdc++.h>
using LL=long long;
using namespace std;
string int2str(LL n)
{
	stringstream ss;
	string temp;
	ss << n;
	ss >> temp;
	return temp;
}
int main()
{
	array<int, 10> num{ 0 };
	LL m, n;
	cin >> m >> n;
	for (; m < n + 1; ++m)
	{
		string temp = int2str(m);
		for (auto const& t : temp)
		{
			switch (t - '0')
			{
			case 0:++num[0]; break;
			case 1:++num[1]; break;
			case 2:++num[2]; break;
			case 3:++num[3]; break;
			case 4:++num[4]; break;
			case 5:++num[5]; break;
			case 6:++num[6]; break;
			case 7:++num[7]; break;
			case 8:++num[8]; break;
			case 9:++num[9]; break;
			}
		}
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << num[i] << " ";
	}
	return 0;
}