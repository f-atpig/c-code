#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//int r = 0;
	//while (r < 10)
	//{
	//	r++;
	//	printf("%d\n", r);
	//}
	//int a=0, b = 0;
	//b = a++;
	//printf("%d %d", a, b);
	//int ch = getchar();
	//printf("%c\n", ch);
	//putchar(ch);
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//	putchar(ch);
	char password[20] = { 0 };
	printf("请创建您的密码->");
	scanf("%s", password);

	int ch = 0;
	while ((ch = getchar()) != '\n');
	printf("请确认您的密码->(Y/N)");
	int rep = getchar();
	if (rep == 'Y' || rep == 'y')
		printf("已确认");
	else
		printf("已取消");




	return 0;
}