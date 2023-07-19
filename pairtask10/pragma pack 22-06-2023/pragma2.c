#include<stdio.h>
struct demo
{
	char chchar;
	double dNo;
};

#pragma pack(1)
int main()
{
struct demo obj;
	{
	printf("SIZE OF OBJ IS:%ld",sizeof(obj));
	}
	getchar();
	return 0;
}