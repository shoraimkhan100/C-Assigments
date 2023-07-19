#include<stdio.h>
int main()
{
	int iNo = 10;
	int const *const pPtr = &iNo;

	iNo++;//allow ino is non constant
	pPtr++;//error pptr is constant
	(*pPtr)++;//error pointing to constant
	printf("%d\n %d",iNo,pPtr);

	return 0;
}