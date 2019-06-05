//2019年6月5日 19:11:01
//没有效率可言的写法
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
template<typename T, typename P> T T2P(P in)
{
	T temp;
	stringstream ss;
	ss << in;
	ss >> temp;
	return temp;
}

int main()
{
	int n;
	cin >> n;
	bool flag = true;
	for (int i = 10000; i < 30001; ++i)
	{
		string temp = T2P<string, int>(i);
		int a = T2P<int, string>(temp.substr(0, 3));
		int b = T2P<int, string>(temp.substr(1, 3));
		int c = T2P<int, string>(temp.substr(2, 3));
		if (a % n || b % n || c % n)
			continue;
		else
		{
			cout << i << endl;
			flag = false;
		}
	}
	if (flag)
		cout << "No" << endl;
	return 0;
}