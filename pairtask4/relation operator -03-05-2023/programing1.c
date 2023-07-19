#include<stdio.h>
	int iAns;
int main()
{
	iAns = 20 < 10;
	if (iAns)
	{
		printf("\"iAns is ture\"\n");
	}
	
	else 
	{
		printf("\"iAns is false\"\n");
	}
	
	iAns = 10 < 10;
	if (iAns)
	{
		printf("iAns is ture\n");
	}
	
	else 
	{
		printf("iAns is false\n");
	}
	iAns = 10 <= 10;
	if (iAns)
	{
		printf("iAns is ture\n");
	}
	
	else 
	{
		printf("iAns is false\n");
	}
	iAns = 10 <= 20;
	if (iAns)
	{
		printf("iAns is ture\n");
	}
	
	else 
	{
		printf("iAns is false\n");
	}
	iAns = 20 >= 20;
	if (iAns)
	{
		printf("iAns is ture\n");
	}
	
	else 
	{
		printf("iAns is false\n");
	}
	iAns = 20 <= 10;
	if (iAns)
	{
		printf("iAns is ture\n");
	}
	
	else 
	{
		printf("iAns is false\n");
	}
	getchar();
	return 0;
}