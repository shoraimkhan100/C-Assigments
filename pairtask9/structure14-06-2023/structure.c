#include<stdio.h>
void fun1();
void fun2();

int main()
{
	int iCounter;
	for(iCounter=0; iCounter<3; iCounter++)
	{
		fun1();
	}
	
	for(iCounter =0; iCounter<3; iCounter++)
	{
		fun2();
	}
	
	return 0;
}
void fun1(void)
{
	int iNo = 10;
	iNo++;
	printf("%d\n",iNo);
}
void fun2(void)
{
	static int iNo = 10;
	iNo++;
	printf("%d\n",iNo);
}
