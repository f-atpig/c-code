#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void  test()
{
	static int o = 1;
	printf("%d\t", o);
	++o;
}

struct Stu
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};
void print(struct Stu* ps)
{
	printf("\n%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	printf("\n%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);

}
typedef unsigned int uint;
int main() {
	int a = 10;
	int* p = &a;//int说明p指向的对象是int类型 *说明p是指针变量
	printf("%p\n", p);
	char ch = 'w';
	char* pc = &ch;
	printf("%p\n", pc);

	unsigned int num1 = 0;
	uint num2 = 0;
	printf("\n\n\n");
	int i = 0;
	while (i < 10)
	{
		test();
		++i;
	}

	struct Stu s = { "WuYongXi",19,"nan","18267225492"};
	printf("\n\n%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}