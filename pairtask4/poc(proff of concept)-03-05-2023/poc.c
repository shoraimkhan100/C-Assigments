#include<stdio.h>
int main()
{
	int iNo1 = 0;
	int iNo2 = 1;
	int iNo3 = 2;
	int iAns;

	iAns = ++iNo1 || ++iNo2 && iNo3;
	printf("value of iNo1, iNo2, iNo3 and iAns is =%d %d %d %d",iNo1,iNo2,iNo3,iAns);

	getchar();
	return 0;
}
/*
outputs:
value of iNo1, iNo2, iNo3 and iAns is =1 1 2 1
*/