#include<stdio.h>
int main(void)
{
	double arr[]={55.22,50.20,30.20,40.50,50.10};
	
	double*pPtr=&arr[4];
		
	printf("%d\n",pPtr);	//132
	
	printf("%lf\n",*pPtr);	//50.10
	
	--pPtr;

	printf("%d\n",pPtr);	//124
	
	printf("%lf\n",*pPtr);	//40.50
	
	return 0;
}


