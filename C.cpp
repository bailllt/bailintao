

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s, s1 = "", s2 = "";
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= '0' && s[i] <= '9')
			s2 += s[i];
		else
			s1 += s[i];
	}
	cout << s1 << s2 << endl;
	return 0;
}

