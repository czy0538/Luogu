//2019年6月3日 10:57:54
#include<iostream>
#include<vector>
using LL=long long;
using namespace std;
int main()
{
	LL n;
	vector<LL> num;
	while (true)
	{
		cin >> n;
		if (n == 0)
			break;
		num.push_back(n);
	}
	for (int i = num.size() - 1; i > -1; --i)//之前错误使用unsigned量
	{
		cout << num[i] << " " ;
	}
		
	return 0;
}