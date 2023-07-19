#include<stdio.h>
int g_iNo = 20;
void fun(void)
{
	printf("in fun,%d",g_iNo);
}//because static is use for only internal linkage.