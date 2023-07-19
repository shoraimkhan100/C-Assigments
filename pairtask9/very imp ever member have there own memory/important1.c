#include<stdio.h>
struct demo 
{
	int iNo1;
	int iNo2;
	int iNo3;
};

int main()
{

	int iNo1;
	int iNo2;
	int iNo3;

	struct demo obj;

	printf("%d\t %d\t\t %d\n",iNo1,iNo2,iNo3);

	obj.iNo1 = 10;
	printf("%d\t\t %d\t\t %d\n",obj.iNo1,iNo2,iNo3);

	obj.iNo2 = 20;
	printf("%d\t\t %d\t\t %d\n",obj.iNo1,obj.iNo2,iNo3);

	obj.iNo3 = 30;
	printf("%d\t\t %d\t\t %d\n",obj.iNo1,obj.iNo2,obj.iNo3);
	
	return 0;
}