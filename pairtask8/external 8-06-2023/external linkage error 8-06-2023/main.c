#include<stdio.h>
#include<conio.h>
void fun(void);
int main(void)
{
	extern int g_iNo;
	printf("in main,%d\n");
	getch();
	return 0;
}
int g_iNo = 20;