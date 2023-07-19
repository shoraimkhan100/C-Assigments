#include<stdio.h>
#include<conio.h>

int No = 10;
void fun(void);
int main()
{
	int No = 20;
	printf("%d\n",No);//20 No is define in locally and Not in extern(globally) not define storage class
	{
		char No ='A';
		printf("%d\n",No);//65 beacuse it define internaly and char is auto get static storage class
	}

	printf("%d\n",No);/* 20
					  the No is define in locally in function come in exiet that time function call
					  and end when function is finished
					  */
	fun();
	getch();
	return 0;
}
void fun(void)
{
	printf("%d",No);//10 beacuse fun is difine globally and No is get globally No value.
}