#include<stdio.h>

struct demo
{
	char chchar;
	int iNo;
	double dNo;
};

int main()
{

	char chchar;
	int iNo;
	double dNo;

	struct demo obj;
	printf("\n\n");
	printf("%c %d %lf",chchar , iNo ,dNo);

	obj.chchar = 65;
	printf("\n\n");
	printf("%c %d %lf",obj.chchar , obj.iNo , obj.dNo);

	obj.iNo = 10;
	printf("\n\n");
	printf("%c %d %lf",obj.chchar , obj.iNo , obj.dNo);

	obj.dNo = 99.9;
	printf("\n\n");
	printf("%c %d %lf",obj.chchar , obj.iNo , obj.dNo);

	getchar();
	return 0;
}