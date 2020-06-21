#define  _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<string.h>

void func(char* str)
{
	char* p1 = NULL;
	char* p2 = NULL;
	int length = 0;
	if (str == NULL)
		return;
	length = strlen(str);
	p1 = str;
	p2 = str + length - 1;
	while (p1 < p2)
	{
		*p1 = *p1 + *p2;
		*p2 = *p1 - *p2;
		*p1 = *p1 - *p2;
		++p1; --p2;
	}
}

int main()
{
	char ch[99];
	scanf("%s", ch);
	func(ch);
	printf("%s\n", ch);
	return 0;
}