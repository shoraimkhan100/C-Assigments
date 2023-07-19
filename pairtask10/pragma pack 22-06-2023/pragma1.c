#include<stdio.h>
struct demo1
{
	char chchar;
	double dNo;
}obj1;
#pragma pack(4)
struct demo2
{
	char chchar;
	double dNo;
}obj2;
#pragma pack(1)
struct demo3
{
	char chchar;
	double dNo;
}obj3;
#pragma pack()
struct demo4
{
	char chchar;
	double dNo;
}obj4;

int main()
{
	struct demo1 obj1;
	printf("size of obj1 is :%ld\n",sizeof(obj1));
	printf("size of obj2 is :%ld\n",sizeof(obj2));
	printf("size of obj3 is :%ld\n",sizeof(obj3));
	printf("size of obj4 is :%ld\n",sizeof(obj4));
	return 0;
}