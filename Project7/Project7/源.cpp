#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//int a, b;
	//scanf("%d%d", &a, &b);
	//printf("%d %d", (a / b),(a%b) );
	/*int num1;

	printf("请输入一个整数：\n");
	scanf("%d", &num1);

	if (num1 % 2 != 0)
		printf("%d是奇数\n", num1);
	else
		printf("%d是偶数\n", num1);*/

	//int n = 0;
	//int num = 0;
	//while (num < 101)
	//{
	//	if (num % 2 != 0)
	//	{
	//		printf("%d\t", num);
	//		++n;
	//	}
	//	++num; 
	//	if (0 == n % 5) printf("\n");
	//}
	int day = 0;
	scanf("%d", &day);
	const int n = 1;

	switch (day)
	{
	case n:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default:
		printf("选择错误\n");
		break;
	}
	return 0;
}