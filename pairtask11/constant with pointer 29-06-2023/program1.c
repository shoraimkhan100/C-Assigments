#include<stdio.h>
int main()
{
	int iNo = 10;
	int *pPtr = &iNo;
	(*pPtr)++;

	printf("%d\n %d\n",&pPtr,*pPtr);

	return 0;
}