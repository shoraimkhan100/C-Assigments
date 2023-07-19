#include<stdio.h>
void fun(void);
int main()
{
	fun();
	return 0;
}

void fun(void)
{
	int No;
	printf("static int , %d",No);
}