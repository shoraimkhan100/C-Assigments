#include<stdio.h>
struct demo
{
struct demo1
{
	double dNo;
	char chchar;
}obj1;
struct demo2
{
	int iNo;
	char chchar;
}obj2;
struct demo3
{
	int iNo;
	double dNo;
}obj3;
struct demo4
{
	char chchar1;
	char chchar2;
}obj4;
}oobj;
int main()
{
	struct demo obj;
	printf("size of obj is:%ld\n",sizeof(oobj.obj1));
	printf("size of obj is:%ld\n",sizeof(oobj.obj2));
	printf("size of obj is:%ld\n",sizeof(oobj.obj3));
	printf("size of obj is:%ld\n",sizeof(oobj.obj4));
	printf("size of oobj is:%ld\n",sizeof(oobj));
	return 0;
}
/*
size of obj is:16
size of obj is:8
size of obj is:16
size of obj is:2
size of obj is:48
*/