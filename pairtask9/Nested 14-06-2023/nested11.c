#include<stdio.h>
struct inner
{
	int iNo;
	float fNo;
};
struct outer
{
	int iNo;
	float fNo;
};

int main()
{
	struct inner iobj;
	printf("size of iobj is:%ld\n",sizeof(iobj));
	return 0;
}
//8