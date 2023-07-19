#include<stdio.h>
#include<conio.h>
extern int No;
int main()
{
	extern int No;
	printf("same data type in different scope, %d",No);

	getch();
	return 0;
}
int No = 10;