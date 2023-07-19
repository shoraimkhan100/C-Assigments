#include<stdio.h>
struct outer
{
	int iNo;
	float fNo;
	
	struct inner
	{
		int No;	
		float fNo;
	}obj;
}oobj;

int main()
{
	struct outer oobj;
	printf("size of outer is:%ld\n",sizeof(oobj));
	return 0;
}
//16