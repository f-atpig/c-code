#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = -1;
		while (num < 200)
		{
			num++;
			if (num % 3 == 0 && num!=0)
				printf("%d\t", num);
		}
	return 0;
}