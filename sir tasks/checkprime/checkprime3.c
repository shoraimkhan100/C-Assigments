#include<stdio.h>
int prime(int);

int main()
{
	int iValue;
	int iNo1 = 0;
	printf("Entre Your Choice:\t");
	scanf("%d",&iValue);

	iNo1 = prime(iValue);
	if(iNo1 == 1)
		printf("Prime Number\n");
	else
		printf("Not Prime Number\n");

	return 0;
}
int prime(int iValue)
{
	int iCounter;
	int iNo1 = 0;
	for(iCounter = 2 ; iCounter <= iValue ; iCounter++)
	{
		if(iValue % iCounter == 0)
		{
		iNo1++;
		}
	}
return iNo1;
}