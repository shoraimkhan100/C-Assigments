#include<stdio.h>
struct outer
{
	int iNo;
	float fNo;
	
	struct inner
	{
		int iNo;	
		float fNo;
	}iobj[2];
}oobj;
int main()
{
	struct outer oobj;
	printf("size of oobj is:%ld\n",sizeof(oobj));
}
//24