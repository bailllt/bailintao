#include<iostream>
#include<string>
using namespace std;
void func(string s)
{
	string s1, s2, s3;
	for (int i = 0; i<s.length(); i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
			s1 += s[i];
		else if (s[i] >= '0'&&s[i] <= '9')
			s3 += s[i];
		else
			s2 += s[i];
	}
	cout << s1 << endl << s3 << endl << s2 << endl;
}
int main()
{
	string s;
	cin >> s;
	func(s);
	return 0;
}