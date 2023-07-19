#include<stdio.h>
int addsub(int,int);
int main()
{
	int iNo1;
	int iNo2;
	int iSum;
	int iDiff;

	printf("Entre two numbers:\t");
	scanf("%d %d",&iNo1,&iNo2);

	iSum = addsub(iNo1,iNo2);
	iDiff = addsub(iNo1,iNo2);

	printf("Add is %d",iSum);
	printf("Substraction is %d",iDiff);
	return 0;
}
int addsub(int iNo1, int iNo2)
{
	int iSum;
	int iDiff;
	iSum = iNo1 + iNo2;
	iDiff = iNo1 - iNo2;
	// return iSum, iDiff; //method 1 unreachable code
	return iSum;
	return iDiff;//method 2 unreachable code 
}