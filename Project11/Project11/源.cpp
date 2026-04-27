#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<windows.h> //sleep
#include<stdlib.h> //cls
int main() {
	/*int a, b, c, left;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)
		left = a;
	else
		left = b;
	if (left > c)
		printf("%d\n", left);
	else printf("%d\n", c);
	return 0;*/

	/*int x, y;
	scanf("%d",&x);
	if (x < 1) y = x;
	if (1 <= x && x < 10) y = 2 * x - 1;
	if (x >= 10) y = 3 * x - 11;
	printf("%d\n", y);*/
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz-1;
	int k = 0;
	printf("请输入1-10的数字，查找数组arr中该数字的位置\n");
	scanf("%d",&k);
	while (arr[left] != k) {
		int mid = (right-left) / 2+left;
		if (mid < k) {
			left = mid + 1;
		}
		else {
			right = mid + 1;
		}
	};
	printf("该数组的位置在%d\n",left);*/
	/*char wc1[] = "Huang Shi Yun";
	char wc2[] = "*************";
	int left = 0; int right = strlen(wc1)-1;
	while (left <= right) {
		wc2[left] = wc1[left];
		wc2[right] = wc1[right];
		Sleep(1000);
		system("cls");
		printf("%s\n", wc2);
		right--; left++;
	}*/
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:\n");
		scanf("%s", password);
		if (strcmp(password, "abcdef") == 0) {
			printf("密码正确\n");
			break;
		}
		else printf("密码错误\n");
	}
	if(i==3)printf("三次密码均错误，已退出\n");
	
	
	
	return 0;
}