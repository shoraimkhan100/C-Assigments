#include<stdio.h>
#pragma pack(8)
int main(void)
{
	struct demo1
	{	
		char Chchar;
		double dNo;
	}obj1;

	#pragma pack(4)
	struct demo2
	{
		char Chchar;
		double dNo;
	}obj2;

	#pragma pack(1)
	struct demo3
	{	
		char Chchar;
		double dNo;
	}obj3;

	#pragma pack()

	struct demo4
	{
		char Chchar;
		double dNo;
	}obj4;

	printf("%d\n",sizeof(obj1));	//12
	printf("%d\n",sizeof(obj2));	//12
	printf("%d\n",sizeof(obj3));	//9
	printf("%d",sizeof(obj4));	//12

	return 0;
}

