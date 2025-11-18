#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//int x,y;
	//scanf("%d", &x);
	//if (x >= 0)
	//{
	//	if (x > 0)
	//		y = -1;
	//	else
	//		y = 0;
	//}
	//else
	//	y = 1;
	//printf("%d", y);

	/*int a = 10;
	while (a > 0)
	{
		a--;
		printf("%d\n", a);
	}*/
	/*int n, m;
	scanf("%d%d", &n, &m);
	int l = n > m ? n : m;
	printf("%d\n", l);*/
	
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 0;
	int a = 3;
	arr[a] = a;
	while (n < 10)
	{
		printf("%d\n",arr[n]);
		n++;
	}





	return 0;
}