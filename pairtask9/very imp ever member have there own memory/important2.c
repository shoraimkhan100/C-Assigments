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
	
	printf("%d\t %d\t %d\n",iNo1,iNo2,iNo3);

	obj.iNo1 = 10;
	printf("%d\t %d\t %d\n",obj.iNo1,iNo2,iNo3);

	obj.iNo2 = 20;
	printf("%d\t %d\t %d\n",obj.iNo1,obj.iNo2,iNo3);

	obj.iNo3 = 30;
	printf("%d\t %d\t %d\n",obj.iNo1,obj.iNo2,obj.iNo3);

	printf("size of demo is :%ld\n",sizeof(union demo));	

	return 0;
}