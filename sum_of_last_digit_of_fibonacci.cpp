#include<iostream>
using namespace std;
int main()
{
	int n, sum,sum1;
	cin >> n;
	int i1 = 0, i2 = 1;
	for (int i = 0; i < n; i++)
	{
		//cout << i1 << " ";
		sum = i1 + i2;
		i1 = i2;
		i2 = sum;
	}
	cout<<sum%10;
}