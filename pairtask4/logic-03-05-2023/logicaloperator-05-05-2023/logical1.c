#include<stdio.h>
int main()
{
	int iAns;

	iAns = 10 && 20;//true (1)
	if(iAns)
	{
		printf("\"iAns is true\"\n");
	}
	else 
	{
		printf("\"iAns is false\"\n");
	}


	iAns = 10 && -20;//true (1)
	if(iAns)
	{
		printf("\"iAns is true\"\n");
	}
	else 
	{
		printf("\"iAns is false\"\n");
	}


	iAns = 10 || 10;//true (1)
	if(iAns)
	{
		printf("\"iAns is true\"\n");
	}
	else 
	{
		printf("\"iAns is false\"\n");
	}


	iAns = -10 || -20;//true (1)
	if(iAns)
	{
		printf("\"iAns is true\"\n");
	}
	else 
	{
		printf("\"iAns is false\"\n");
	}


	iAns = !10;//false(0)
	if(iAns)
	{
		printf("\"iAns is true\"\n");
	}
	else 
	{
		printf("\"iAns is false\"\n");
	}


	iAns = !-10;//false (0)
	if(iAns)
	{
		printf("\"iAns is true\"\n");
	}
	else 
	{
		printf("\"iAns is false\"\n");
	}
	

	iAns = 1 || 1;//true (1)
	if(iAns)
	{
		printf("\"iAns is true\"\n");
	}
	else 
	{
		printf("\"iAns is false\"\n");
	}


	iAns = 1 || 0;//true (1)
	if(iAns)
	{
		printf("\"iAns is true\"\n");
	}
	else 
	{
		printf("\"iAns is false\"\n");
	}


	iAns = 1 && 1;//true (1)
	if(iAns)
	{
		printf("\"iAns is true\"\n");
	}
	else 
	{
		printf("\"iAns is false\"\n");
	}


	iAns = 1 && 0;
	if(iAns)
	{
		printf("\"iAns is true\"\n");
	}
	else 
	{
		printf("\"iAns is false\"\n");
	}


	iAns = !1;
	if(iAns)
	{
		printf("\"iAns is true\"\n");
	}
	else 
	{
		printf("\"iAns is false\"\n");
	}

	getchar();
	return -1,1;
}