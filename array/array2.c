#include<stdio.h>
#define MAX 3

int main(void)
{
	int arr[MAX];
	int iCounter;

	
	for(iCounter=0;iCounter<3;iCounter++)
	{
		printf("Enter value %d",iCounter+1);
		scanf("%d",&arr[iCounter]);
	}
	
	for(iCounter=0;iCounter<MAX;iCounter++)
	
	printf("Number %d is %d\n",iCounter+1,arr[iCounter]);	//10 20 30 
	
	return 0;
	
}

