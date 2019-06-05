#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	int sum=0;
	int unhappy= 0;
	bool flag = false;
	cin >> n;
	for (int i = 0; i < 2*n; ++i)
	{
		int temp;
		cin >> temp;	
		unhappy += temp;
		if (flag)
		{
			flag = false;
			unhappy -= 8;
			sum += unhappy;
		}
		else flag = true;
		
	}
	cout << unhappy << endl;
	return 0;
}