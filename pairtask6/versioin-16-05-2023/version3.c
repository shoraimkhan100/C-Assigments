#include<stdio.h>
int main()
{
	int iCounter;
	for(iCounter=0;;iCounter++)
	{
		if(iCounter == 3)
			break;
		printf("%d\t",iCounter);
	}
	getchar();
	return 0;
}
//op: 0 1 2