#include<stdio.h>
int main(void)
{
	int arr[5]={10,20,30,40,50};
	
	int*pPtr=&arr;
	
	printf("%d\n",&pPtr);	//200
	
	printf("%d\n",pPtr);	//100
	
	printf("%d\n",*pPtr);	//10
	
	pPtr++;
	
	printf("%d\n",&pPtr);	//200
	
	printf("%d\n",pPtr);	//104
	
	printf("%d",*pPtr);	//20
	
	return 0;
	




}
