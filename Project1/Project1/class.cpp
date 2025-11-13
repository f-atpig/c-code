#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
#include<string.h>
int main() {
	///*int arr[10] = { 2,3,5,7,11,13,17,19,23,29 };
	//int i = 9;
	//while (i >= 0)
	//{
	//	printf("%d\t", arr[i]);
	//	i--;
	//}*/
	//int a = 3;
	//int b = a << 1;
	//printf(" % d\n", b);
	//printf(" % d\n", a);
	//
	float a, b, c,disc,q,p,x1,x2,s3= 0;
	scanf("%f%f%f", &a, &b, &c);
	printf("在方程：ax^2+bx+c=0中,a=%f,b=%f,c=%f\n\n", a, b, c);
	disc = ( b * b )- (4 * a * c);
	if (disc >= 0)
	{
		p = -b / (2.0 * a);
		q = sqrt(disc) / (2 * a);
		x1 = p + q; x2 = p - q;
		printf("方程的两根分别为\nx1=%f \n x2=%f\n", x1, x2);
	}
	else
	{
		printf("此方程无实数根");
	}
	return 0;
}