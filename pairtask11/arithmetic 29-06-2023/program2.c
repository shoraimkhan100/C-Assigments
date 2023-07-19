#include<stdio.h>
int main()
{
	double arr[] = {10,20,30,40,50};
	double *pPtr = &arr[4];

	printf("%d\n",pPtr);//132
	printf("%lf\n",*pPtr);//50

	--pPtr;
	printf("%d\n",pPtr);//124
	printf("%lf\n",*pPtr);//40

	pPtr--;
	printf("%d\n",pPtr);//123
	printf("%lf\n",*pPtr);//30

	getchar();
	return 0;
}