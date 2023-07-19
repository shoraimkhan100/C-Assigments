#include<stdio.h>
union demo
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

	union demo obj;
	printf("%c\t %d\t %lf\n",chchar,iNo,dNo);

	obj.chchar = 65;
	printf("%c\t %d\t %lf",obj.chchar,iNo,dNo);

	obj.iNo = 10;
	printf("%c\t %d\t %lf\n",obj.chchar,obj.iNo,dNo);

	obj.dNo = 99.9;
	printf("%c\t %d\t %lf\n",obj.chchar,obj.iNo,obj.dNo);
	
	printf("size of demo is :%ld\n",sizeof(union demo));

	return 0;
}