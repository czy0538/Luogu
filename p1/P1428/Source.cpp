//2019Äê6ÔÂ5ÈÕ 10:43:41
#include<iostream>
#include<vector>
using namespace std;
int max(vector<int> const& q,int n)
{
	int num = 0;
	for (int i = 0; i < n; ++i)
	{
		if (q[n] > q[i])
			++num;
	}
	return num;
}
int main()
{
	int n;
	int temp;
	cin >> n;
	vector<int> q;
	//array<int, n>;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		q.push_back(temp);
	}
	for (int i = 0; i < n; ++i)
	{
		cout << max(q, i) << " ";
	}
	return 0;
}