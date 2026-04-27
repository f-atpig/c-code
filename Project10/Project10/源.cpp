#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	//int i = 0;
	//int i = 0;
	//for (i = 1; i <= 10; i++)
	//	printf("%d ", i);
	//int k = 0;
	//for (k = 0; k == 0; k++)
	//{
	//	printf("hehe\n");
	//}
	//do
	//{
	//	i++;
	//	printf("%d\n", i);
	//} while (i < 10);
	//int r = 1;
	//int num; //计算num的阶乘
	//int n = 1;
	//int ret = 1;
	//scanf("%d", &num);
	// 
	// 
	//do
	//{
	//	r = r * (n + 1); //do while 循环表示形式
	//	n++;
	//} 
	//while (n < num);
	// 
	// 
	//for (n = 1; n < num; n++)
	//{
	//	r = r * (n + 1);
	//	ret += r;//for 循环表示形式
	//}
	//printf("%d %d\n", r,ret);

	//二分法查找有序数组
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30 };
	int k;
	scanf("%d",&k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (right - left) / 2 + left;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("下标是:%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到");*/

	char arr1[] = "welcome to world";
	char arr2[] = "                ";
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0])-2; /*printf("%d\n", right);*/
	/*printf("%c\n", string[right]);
	for (int n = 0; n < right; n++)
		printf("%c\n", string[n]);*/
	///*int left = 1;
	//while (left <= right)
	//{
	//	int kong = right - left-1;
	//	for (int l = 0; l < left; l++)
	//		printf("%c", string[l]);
	//	for (int k = 0; k < kong-1; k++)
	//		printf("#");
	//	for (int r = right+1; r < 16; r++)
	//		printf("%c", string[r]);
	//	left++; right--;
	//	printf("\n");*/
	//}
	for (; left <= right; left++, right--)
	{
		arr1[left]
	}




	return 0;
}