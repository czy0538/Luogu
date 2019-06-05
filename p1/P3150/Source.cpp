//2019Äê6ÔÂ5ÈÕ 15:09:01
#include<bits/stdc++.h>
using namespace std;
const string pb = "pb wins";
const string zs = "zs wins";
int main()
{
	int n;
	cin >> n;
	vector<int> num;
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> temp;
		num.push_back(temp);
	}
	for (auto const& t : num)
	{
		if (t% 2)
			cout << zs << endl;
		else
			cout << pb << endl;
	}
	return 0;
}