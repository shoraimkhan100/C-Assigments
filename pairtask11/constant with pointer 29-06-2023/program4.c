#include<stdio.h>
int main()
{
	const int iNo = 10;
	int *pPtr = &iNo;

	iNo++;//error ino is constant
	pPtr++;//allow pptr is non constant
	(*pPtr)++;//allow pointing to non constant

printf("%d\n %d",iNo,pPtr);
	return 0;
}