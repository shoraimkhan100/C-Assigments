#include<stdio.h>
int main()
{
	int iNo1 = 0;
	int iNo2 = 1;
	int iNo3 = 2;
	int iAns;

	iAns = iNo1 && ++iNo2 && iNo3++;	
	
	if(iAns)
	{
		printf("iAns is 1\n");
	}
	else
	{
		printf("iAns is 0\n");
	}
	
	printf("%d %d %d %d\n",iNo1,iNo2,iNo3,iAns);


	getchar();
	return 0;
}