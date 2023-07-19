#include<stdio.h>
int main()
{
	double arr[] = {10,20,30,40,50};
	double *pPtr = &arr[4];

	printf("%lf\n",*pPtr);//50
	printf("%d\n",&pPtr);//132

	printf("%d\n",pPtr-3);//108
	printf("%lf\n",*(pPtr-3));//20

	return 0;
}