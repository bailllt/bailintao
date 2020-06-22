#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1;
	int i = 0;
	while (s1[i]) {

		if (i < s1.length() - 2 && s1[i] == 'g' && s1[i + 1] == 'z' && s1[i + 2] == 'u')
			i += 3;
		else 
		{
			s2 += s1[i];
			i++;
		}

	}
	cout << s2 << endl;

	return 0;

}

