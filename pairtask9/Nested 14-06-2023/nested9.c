#include<stdio.h>
union outer
{
	int iNo;
	double dNo;
	struct inner
	{
		int iNo;
		float fNo;
	}iobj1,iobj2;
}oobj;

int main()
{
	union outer oobj;
	printf("size of oobj is :%ld\n",sizeof(oobj));
	return 0;
}
//8