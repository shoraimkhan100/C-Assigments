#include<stdio.h>
#include<conio.h>
int main()
{
	int iprint;
	int iscan;
	int iNo;

	iprint = printf("Entre your value:\t");
	iscan = scanf("%d",&iNo);

	printf("Printf return is = %d\n",iprint);
	printf("scanf return is = %d\n",iscan);

	getch();
	return 0;
}