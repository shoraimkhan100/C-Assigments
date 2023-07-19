#include<stdio.h>
int main(void)
{
	int No=10;
		
	int*p=&No;
	
	int**q=&p;
	
	int***r=&q;
	
	int****s=&r;
	
	int*****x=&s;
	
	int******y=&x;
	
	int*******z=&y;
	
	printf("%d\n",**q);	//10
	
	printf("%d\n",***s);	//100
	
	printf("%d\n",****z);	//300
	
	//printf("%d\n",****r)	//error
	
	printf("%d\n",**x);	//300
	
	printf("%d\n",&(**x));	//400

	printf("%d\n",&(***r));	//100

	printf("%d\n",*p);	//10
	
	printf("%d\n",&(*p));	//100
	
	printf("%d\n",&No);	//100
	
	printf("%d\n",*(&No));	//10
		
	printf("%d\n",*(&(*p))); //10
	return 0;
}
