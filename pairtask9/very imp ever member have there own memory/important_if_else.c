#include<stdio.h>
#include<stdio.h>

struct demo
{
	char chchar;
	int iNo;
	double dNo;
}obj1;

int main()
{
	char chchar;
	int iNo;
	double dNo;

	struct demo obj2;
	
	printf("%c\t %d\t %lf\n",chchar,iNo,dNo);

	obj2.chchar = 65;
	printf("%c\t %d\t %lf\n",obj2.chchar,iNo,dNo);

	obj2.iNo = 10;
	printf("%c\t %d\t %lf\n",obj2.chchar,obj2.iNo,dNo);

	obj2.dNo = 99.9;
	printf("%c\t %d\t %lf\n",obj2.chchar,obj2.iNo,obj2.dNo);

	printf("size of demo is :%ld",sizeof(struct demo));

	if(obj1 == obj2)
		printf("Equal");
	else
		printf("Not Equal");
	
	return 0;	
}