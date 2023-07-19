#include<stdio.h>

union demo
{
	char chchar;
	int iNo;
	double dNo;
};

int main(void)
{
	char chchar;
	int iNo;
	double dNo;

	union demo obj;
	printf("\n\n");
	printf("%c\t %d\t %lf\t",chchar , iNo , dNo);

	obj.chchar = 65;
	printf("\n\n");
	printf("%c\t %d\t %lf\t",obj.chchar , obj.iNo , obj.dNo);


	obj.iNo = 10;
	printf("\n\n");
	printf("%c\t %d\t %lf\t",obj.chchar , obj.iNo , obj.dNo);
	
	obj.dNo = 99.9;
	printf("\n\n");
	printf("%c\t %d\t %lf\t",obj.chchar , obj.iNo , obj.dNo);


	getchar();
	return 0;
}