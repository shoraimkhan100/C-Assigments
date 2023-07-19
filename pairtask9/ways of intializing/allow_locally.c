#include<stdio.h>
struct demo
{
	int iNo;
	float fNo;
}obj1;

struct demo obj2;

int main()
{
	struct demo obj3;
	
	obj1.iNo = 10;
	obj1.fNo = 57.33;
	
	obj2.iNo = 20;
	obj2.fNo = 58.44;
	
	obj3.iNo = 30;
	obj3.fNo = 59.55;

	printf("size of demo : %ld\n",sizeof(struct demo));

	return 0;
}