#include<stdio.h>
struct outer
{
	int iNo1;
	float fNo1;

	struct inner
	{
			int iNo2;
			float fNo2;
	}oobj;
};

int main()
{
	struct outer oobj;
	printf("size of of oobj is :%ld",sizeof(oobj));	
	return 0;
}

//16