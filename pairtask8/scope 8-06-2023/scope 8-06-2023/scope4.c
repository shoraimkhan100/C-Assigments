#include<stdio.h>
#include<conio.h>
extern int No;
int main()
{
	extern char No;
	printf("%d",No);
	getch();
	return 0;
}
//different data type in different scope.