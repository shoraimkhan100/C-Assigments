#include<stdio.h>

struct demo
{
	int iNo1;
	int iNo2;
	int iNo3;
};

int main()
{
	int iNo1,iNo2,iNo3;
	struct demo obj;
	printf("\n\n");
	printf("%d\t %d\t %d",iNo1,iNo2,iNo3);

	printf("\n\n");
	obj.iNo1 = 10;
	printf("%d\t %d\t %d\n",obj.iNo1 ,obj.iNo2 ,obj.iNo3);

	printf("\n\n");
	obj.iNo2 = 20;
	printf("%d\t %d\t %d\n",obj.iNo1 ,obj.iNo2 ,obj.iNo3);
	
	printf("\n\n");
	obj.iNo3 = 30;
	printf("%d\t %d\t %d\n",obj.iNo1 ,obj.iNo2 ,obj.iNo3);
	getchar();
	return 0;
}