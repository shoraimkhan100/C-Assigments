#include<stdio.h>

void prime(void);

int main(void)
{
	prime();
	return 0;
}
void prime(void)
{
	int iCounter;
	int iValue;
	int iNo1 = 0;

	printf("Entre your choice:\t");
	scanf("%d",&iValue);

	for(iCounter = 2; iCounter <= iValue; iCounter++)
	{
		if(iValue % iCounter == 0)
		{
			iNo1++;
		}
	}
	if(iNo1 == 1)
		printf("prime number");
	else
		printf("Not prime number");
}
// No input and No output.