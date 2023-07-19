#include<stdio.h>
union outer
{
	int iNo;
	float fNo;

	union inner
	{
		int iNo;
		float fNo;
	}iobj[2];
}oobj;

int main()
{
	union outer oobj;
	printf("size of oobj is:%ld\n",sizeof(oobj));
	return 0;
}
//8