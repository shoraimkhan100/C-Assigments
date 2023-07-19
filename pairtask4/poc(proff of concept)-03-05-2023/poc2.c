include<stdio.h>
int main()
{
	int iNo1;
	int iNo2;
	int iNo3;
	int iAns;

	iAns = ++iNo1 || ++iNo2 && iNo3;
	printf("value of iNo1,iNo2,iNo3,iAns %d %d %d %d",iNo1,iNo2,iNo3,iAns);
	getchar();
	return 0;
}