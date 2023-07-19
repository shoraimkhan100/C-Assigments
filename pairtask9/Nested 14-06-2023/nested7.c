#include<stdio.h>
union outer
{
	int iNo;
	float fNo;

	union inner
	{
		int iNo;	
		double dNo;
	}iobj1,iobj2;
}oobj;

int main()
{
	union outer oobj;
	printf("size of oobj is:%ld\n",sizeof(oobj));
	return 0;
}
//8