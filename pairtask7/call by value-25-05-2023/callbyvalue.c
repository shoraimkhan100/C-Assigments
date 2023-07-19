#include<stdio.h>

void fun(int);

int main()
{
	int iNo = 10;
	printf("Before calling fun:%d\n",iNo);//10
	fun(iNo);
	printf("After calling fun:%d\n",iNo);//10
	return 0;
}

void fun(int iNo)
{
	printf("In the fun:%d\n",iNo);//10
	iNo++;
	printf("Leaving fun:%d\n",iNo);//11
}