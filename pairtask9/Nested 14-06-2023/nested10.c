#include<stdio.h>
union outer
{
	int iNo;
	float fNo;
		
	struct inner
	{
		char chchar1;
		char chchar2;
	}iobj[3];
}oobj;

int main()
{
	union outer oobj;
	printf("size of oobj is :%ld\n",sizeof(oobj));
	return 0;
}
//8