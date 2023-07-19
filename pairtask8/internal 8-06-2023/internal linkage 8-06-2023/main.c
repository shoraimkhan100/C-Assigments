#include<stdio.h>
#include<conio.h>
int main (void)
{
	extern int g_iNo;
	printf("in main,%d\n",g_iNo);
	fun();
	getch();
	return 0;
}
int g_iNo = 20;
