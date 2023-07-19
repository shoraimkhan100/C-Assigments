#include<stdio.h>
int main()
{
	int arr[] = {10,20,30,40,50};

	int *pPtr1 = &arr[0];
	int *pPtr2 = &arr[4];

	printf("%d\n",pPtr1);
	printf("%d\n",pPtr2);

	printf("%d",pPtr1 + pPtr2);

	return 0;
}