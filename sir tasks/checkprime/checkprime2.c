#include<stdio.h>
void prime(int);
int main(void)
{
	int iValue;

	printf("Entre Your choice:\t");
	scanf("%d",&iValue);

	prime(iValue);
	return 0;
}
void prime(int iValue)
{
	int iCounter;
	int iNo1 = 0;
	for(iCounter = 1 ; iCounter<=iValue ; iCounter++)
	{
		if(iValue % iCounter == 0)
		{
			iNo1++;
		}
	}
	if(iNo1 == 2)
		printf("Prime Number\n");
	else
		printf("Not prime Number\n");
}