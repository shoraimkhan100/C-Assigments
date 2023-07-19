#include<stdio.h>
#define MAX 3
int main()
{
	int arr[MAX];
	int iCounter;

	for(iCounter=0; iCounter<MAX; iCounter++)
	{
		printf("Entre value %d:\t",iCounter+1);
		scanf("%d",&arr[iCounter]);
	}
	for(iCounter=0; iCounter<MAX; iCounter++)
		printf("Value %d is : %d\n",iCounter+1,arr[iCounter]);
	return 0;
}