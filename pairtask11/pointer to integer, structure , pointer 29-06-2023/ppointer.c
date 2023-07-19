#include<stdio.h>
int main()
{
	int iNo = 10;
	int *p = &iNo;

	int **q = &p;
	int ***r = &q;
	int ****s = &r;
	int *****x = &s;
	int ******y = &x;
	int *******z = &y;

	printf("%d\n",**q);//10
	printf("%d\n",***s);
	printf("%d\n",****z);
	printf("%d\n",***r);
	printf("%d\n",&(**x));
	printf("%d\n",&(***r));
	printf("%d\n",*p);
	printf("%d\n",&(*p));
	printf("%d\n",*(&(*p)));
	printf("%d\n",&iNo);
	printf("%d",*(&iNo));

	return 0;
}