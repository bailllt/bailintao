#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x, i, j, yinzi[100], k = 0, t = 0, s = 0, len = 1;
	for (i = 2; i <= sqrt(n); i++)
		if (n%i == 0)
			yinzi[k++] = i;
	for (i = 0; i < k; i++)
	{
		x = i;

		j = i;
		while ((yinzi[j] == yinzi[j + 1] - 1) && j < k) j++; t = j;
		if (t - x + 1 > len) { len = t - x + 1; s = t; }
		i = j;

	}
	if (len == 1) cout << n;
	for (i = s - len + 1; i <= s; i++)
		cout << yinzi[i] << " ";
	return 0;
}