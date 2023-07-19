#include<stdio.h>
#include<conio.h>
void fun(void);
int main()
{
	extern int g_iNo;
	printf("in main,%d\n",g_iNo);
	fun();
	getch();
	return 0;
}

