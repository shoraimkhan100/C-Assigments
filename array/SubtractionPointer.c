#include<stdio.h>
int main(void)
{
	int arr[5]={10,20,30,40,50};
	int*pPtr1=&arr[0];
	int*pPtr2=&arr[4];
	
	printf("%d\n",pPtr1);	//100
	printf("%d\n",pPtr2);	//116
	
	printf("%d\n",pPtr1-pPtr2);//-4
	printf("%d",pPtr2-pPtr1);//4
	
	return 0;
}


