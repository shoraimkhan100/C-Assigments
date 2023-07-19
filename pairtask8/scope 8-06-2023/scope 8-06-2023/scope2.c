#include<stdio.h>
#include<conio.h>
int main()
{
	extern int No;
	extern char No;

	printf("%d",No);

	getch();
	return 0;
}//error because diiferent data type in same scope.