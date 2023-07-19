#include<stdio.h>
struct outer
{
	char chchar;
	int iNo;
	
	struct inner
	{
		int iNo;	
		float fNo;
	
	}iobj1,iobj2;
	float fNo;
}oobj;

int main()
{
	struct outer oobj;
	printf("size of oobj is :%ld\n",sizeof(oobj));
	return 0;
}
//28