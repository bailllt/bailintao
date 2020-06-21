#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void func()
{
	int m[12] = {0,0,0,0,30,31,30,31,31,30,31,30,31 };
	int month;
	scanf("%d", &month);
	int day;
	scanf("%d", &day);
	int n = 0;
	for (int i = 4;i<month; i++)
	{
		n+= m[i-1];
	}
	n =n+day - 12;
	int week=n%7;
	if (week == 0)
		printf("Thursday\n");
	if(week==1)
		printf("Friday\n");
	if (week == 2)
		printf("Saturday\n");
	if (week == 3)
		printf("Sunday\n");
	if (week == 4)
		printf("Monday\n");
	if (week == 5)
		printf("Tuesday\n");
	if (week == 6)
		printf("Wednessday\n");
}
int main()
{
	func();
	return 0;
}