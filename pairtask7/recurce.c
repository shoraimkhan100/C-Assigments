#include<stdio.h>
int fact(int);
int main()
{
	int iNo;
	int iAns;
	

	printf("Enter Number:\t");
	scanf("%d",&iNo);

	iAns = fact(iNo);
	
	printf("factorial of %d is %d",iNo,iAns);
	
	getchar();
	return 0;
}
int fact(int iNo)
{
	if(iNo == 1)
		return 1;

	return iNo * fact(iNo - 1);
}