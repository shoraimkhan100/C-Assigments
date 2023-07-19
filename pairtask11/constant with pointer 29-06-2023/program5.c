#include<stdio.h>
int main()
{
	int iNo = 10;
	int *const pPtr = &iNo;

	iNo++;//allow ino is non constant
	pPtr++;//errorpptr is constant
	(*pPtr)++;//allow pointing to non constant
	printf("%d\n %d",iNo,pPtr);

	return 0;
}