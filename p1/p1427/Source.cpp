//2019��6��3�� 10:57:54
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
	for (int i = num.size() - 1; i > -1; --i)//֮ǰ����ʹ��unsigned��
	{
		cout << num[i] << " " ;
	}
		
	return 0;
}