#include<stdio.h>
#include<conio.h>

void addition(void);

int main()
{
	addition();
	
	getch();
	return 0;
}
void addition(void)
{
	int iNo1;
	int iNo2;
	int iAns;

	printf("Entre two Numbers:\t");
	scanf("%d%d",&iNo1,&iNo2);

	iAns = iNo1 + iNo2;
	printf(" ans is %d",iAns);
}