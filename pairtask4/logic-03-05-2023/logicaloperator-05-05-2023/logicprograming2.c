#include<stdio.h>
int main()
{
	int iNo1 = 0;
	int iNo2 = 1;
	int iNo3 = 2;
	int iAns;

	iAns = iNo1 && ++iNo2 || iNo3++;//1 true
	if (iAns)
	{
		printf("iAns is 1\n");
	}
	else 
	{
		printf("iAns is 0\n");
	}

	printf("%d %d %d %d\n",iNo1,iNo2,iNo3,iAns);//0 1 3 1

	getchar();
	return 0;
}