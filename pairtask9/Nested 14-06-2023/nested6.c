#include<stdio.h>
struct outer
{
	char chchar;
	float fNo;
	
	union inner
	{
		char chchar;
		float fNo;
	}iobj[2];
}oobj;

int main()
{
	struct outer oobj;
	printf("size of oobj is:%ld\n",sizeof(oobj));
	return 0;
}
//16