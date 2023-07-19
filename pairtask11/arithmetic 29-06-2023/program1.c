#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};

	int *pPtr = &arr[0];	//addr 100

	printf("%d\n",&pPtr);//200
	printf("%d\n",pPtr);//100
	printf("%d\n",*pPtr);//10

	++pPtr;
	printf("%d\n",&pPtr);//200
	printf("%d\n",pPtr);//104
	printf("%d\n",*pPtr);//20

	pPtr++;
	printf("%d\n",&pPtr);//200
	printf("%d\n",pPtr);//110
	printf("%d\n",*pPtr);//30

	return 0;	
}