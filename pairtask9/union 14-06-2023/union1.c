#include<stdio.h>

union demo
{
	int iNo;
	float fNo;
	double dNo;
};

int main()
{
	printf("size of union demo :%ld\n", sizeof(union demo));
	return 0;
}