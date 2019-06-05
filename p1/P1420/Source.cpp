#include<bits/stdc++.h>
using namespace std;
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
	//sort(num.begin(),num.end());
	int t = 1;
	int max = 1;
	for (int i = 0; i < n - 1; ++i) {
		//cout << num[i] << endl;
		if (num[i + 1] == num[i] + 1)

		{
			++t;
			//cout <<"t"<< t << endl;
			if (t > max)
				max = t;
		}
		else if (num[i + 1] == num[i])
			;
		else t = 1;
	}
	cout << max<<  endl;
	return 0;
}