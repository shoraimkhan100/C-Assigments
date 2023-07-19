#include<stdio.h>
struct demo
{
	int iNo;
	float fNo;
};

int main()
{
	struct demo obj;
	printf("size of demo is : %ld",sizeof(struct demo));
	return 0;
}