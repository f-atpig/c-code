#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int MAX(int x, int y)
{
	if (x < y)
		return y;
	else
		return x;
}
int main() {
	//printf("Name    Age    Gender\n");
	//int a = 1;
	//while (a <= 21)
	//{
	//	printf("-");
	//	a++;
	//}
	//printf("\nJack    18     man");

	//int a, c,num;
	//scanf("%d%d", &a, &c);
	//num = ((-8 + 22) * a) - 10 + (c / 2);
	//printf("%d\n", num);
	/*char arr[8] = { '1','2','3' };
	printf("%d\n", strlen(arr));*/

	int a, b;
	scanf("%d%d", &a, &b);
	int r = MAX(a, b);
	printf("%d", r);
	return 0;
}