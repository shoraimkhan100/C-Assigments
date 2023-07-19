#include<stdio.h>

static int iNo1;
static int iNo2;

int value(int,int);

int main()
{
	printf("\n\n");
	printf("\t\t Entre two value:\t");
	scanf("\t\t	 %d %d",&iNo1,&iNo2);
		value(iNo1,iNo2);

			printf("\n\n");
				return main();
}
	

int value(int iNo1 , int iNo2)
{
	if(iNo1,iNo2>=6)
	{
		if(iNo1>6)
			{
				printf("\t\t %d IS GRATER THAN 6\n",iNo1);
			}
		if(iNo2>6)
				{
					printf("\t\t %d IS GRATER THAN 6\n",iNo2);
				}
						printf("\t\t YOUR CHOICE IS WRONG\n");		
	}
	else
					{
						printf("\t\t CORRECT CHOICE %d %d\n",iNo1,iNo2);
					}

}
