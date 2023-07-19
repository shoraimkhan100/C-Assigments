#include<stdio.h>
int iAns;
int main()
{
	iAns = !(20 == 10);//true
	if (iAns)
	{
		printf("iAns is true\n");
	}
	else
	{
		printf("iAns is false\n");
	}

	/*
	iAns = (!20= 10); //this code is incorrect
		if (iAns)
	{
		printf("iAns is true\n");
	}
	else
	{
		printf("iAns is false\n");
	}
	*/

	iAns = 10!= 10; //fasle
		if (iAns)
	{
		printf("iAns is true\n");
	}
	else
	{
		printf("iAns is false\n");
	}
	
	iAns = 20<=10;//false
		if (iAns)
	{
		printf("iAns is true\n");
	}
	else
	{
		printf("iAns is false\n");
	}
	
		
	iAns = 20<=10 ==1;//false
		if (iAns)
	{
		printf("iAns is true\n");
	}
	else
	{
		printf("iAns is false\n");
	}
	
		
	iAns = (20<=10)!=1;//true
		if (iAns)
	{
		printf("iAns is true\n");
	}
	else
	{
		printf("iAns is false\n");
	}
	
		
	iAns = 0!=(20<=10);//false
		if (iAns)
	{
		printf("iAns is true\n");
	}
	else
	{
		printf("iAns is false\n");
	}
	getchar();
	return 0 ;

} 