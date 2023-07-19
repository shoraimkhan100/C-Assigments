#include<stdio.h>
int main()
{

	int iNo = 10;
	int *pPtr = &iNo;
	
	printf("%d\n",iNo);//10
	printf("%d\n",&iNo);//addr 100
	printf("%d\n",pPtr);//addr 100
	printf("%d\n",&pPtr);//addr 200
	printf("%d\n",*pPtr);//10

	*pPtr = 20;
	printf("%d\n",*pPtr);//addr 20
	return 0;
}