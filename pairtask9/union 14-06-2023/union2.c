#include<stdio.h>
struct demo
{
	int iNo;
	float fNo;
}obj;

int main()
{
	printf("size of : %ld",sizeof(struct demo));
	return 0;
}