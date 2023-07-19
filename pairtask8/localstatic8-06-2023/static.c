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
	int No;
	printf("life time local , %d\n",No);
}