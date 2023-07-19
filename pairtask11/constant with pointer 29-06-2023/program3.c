#include<stdio.h>
int main()
{
	int iNo = 10;
	const int *pPtr = &iNo;

	iNo++;//allow ino is non constant
	pPtr++;//allow pptr is non constant
	(*pPtr)++;//error pointing to constant

	printf("%d\n %d",iNo,pPtr);
	return 0;
}