#include<stdio.h>
int main(void)
{
	double arr[5]={10.10,20.10,30.10,40.10,50.10};
	
	double*pPtr=&arr[4];
	
	printf("%d\n",pPtr);		//132
	
	printf("%lf\n",*pPtr);		//50.10
	
	printf("%d\n",pPtr-3);		//108
	
	printf("%lf",*(pPtr-3));	//20.10
	
	return 0;
}

