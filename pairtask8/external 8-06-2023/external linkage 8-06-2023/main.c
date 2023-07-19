#include<stdio.h>
void fun(void);
int main()
{
	extern int g_iNo;
	printf("in main,%d\n",g_iNo);
	fun();
	getchar();
	return 0;
}