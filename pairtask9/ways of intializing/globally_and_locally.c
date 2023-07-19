#include<stdio.h>
struct demo
{
	int iNo;
	float fNo;
}obj1={10,57.33f};

int main()
{	
	struct demo obj2 = {20 , 69.33f};
	printf("size of demo :%ld\n",sizeof(struct demo));
	return 0;
}