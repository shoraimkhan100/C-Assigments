#include<stdio.h>
union demo
{
	int iNo1;
	int iNo2;
	int iNo3;
};

int main()
{
	int iNo1 , iNo2 , iNo3;

	union demo obj;

	printf("\n\n");
	printf("%d\t %d\t %d", iNo1 , iNo2 , iNo3);
	
	obj.iNo1 = 10;
	printf("\n\n");
	printf("%d %d %d",obj.iNo1 , obj.iNo2 , obj.iNo3);

	obj.iNo1 = 20;
	printf("\n\n");
	printf("%d %d %d",obj.iNo1 , obj.iNo2 , obj.iNo3);

	obj.iNo1 = 30;
	printf("\n\n");
	printf("%d %d %d",obj.iNo1 , obj.iNo2 , obj.iNo3);

	getchar();
	return 0;
 }