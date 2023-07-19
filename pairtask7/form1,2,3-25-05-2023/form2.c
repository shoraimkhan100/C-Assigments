#include<stdio.h>

void addition(int iNo1, int iNo2);

int main()
{
	int iNo1 , iNo2;

	printf("Enter two Numbers:\t");
	scanf("%d%d",&iNo1,&iNo2);
	addition(iNo1,iNo2);
	getchar();
	return 0;
}
void addition(int iNo1, int iNo2)
{
	int iAns;	
	iAns = iNo1 + iNo2;
	printf("ans is %d",iAns);
}
//OP:input and no output
