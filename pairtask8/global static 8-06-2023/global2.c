#include<stdio.h>

static int No;
void fun(void);

int main()
{
	
	fun();
	return 0;
}

void fun(void)
{
	printf("global %d", No);
}