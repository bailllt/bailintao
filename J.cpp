#include <iostream>
using namespace std;
long int func(int n)
{
	int result;
	if (n==0)
		return result=1;
	else
	{
		result = n * func(n - 1);
	}
	return result;
}
int main()
{
	int n;
	long int sum = 0;
	cin >> n;
	for (int i = 0; i <=n; i++)
	{
		sum += func(i);
	}
	cout << sum -1<< endl;
	return 0;
}