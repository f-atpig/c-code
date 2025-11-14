#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int a, b, c;
	a = b = c = 0;
	while (a < 2)
	{
		printf("     **\n");
		a++;
	}
	while (b < 2)
	{
		printf("************\n");
		b++;
	}
	while (c < 2)
	{
		c++;
		printf("    *  *\n");
	}
	return 0;
}