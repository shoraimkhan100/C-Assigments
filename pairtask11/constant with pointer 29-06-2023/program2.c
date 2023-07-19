#include<stdio.h>
int main()
{
	const int iNo = 10;
	const int *pPtr = &iNo;

	iNo++;//error ino is constant
	pPtr++;//allow is allow pptr is non constant
	(*pPtr)++;//error pointing to constant

	printf("%d\n %d",iNo , pPtr);

	return 0;
}