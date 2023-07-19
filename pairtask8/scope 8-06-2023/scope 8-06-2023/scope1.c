#include<stdio.h>
#include<conio.h>
int main()
{
	extern int No;
	extern int No;

	printf("same data type in same scope , %d",No);
	getch();
	return 0;
}
int No = 10;