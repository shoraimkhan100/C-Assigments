#include<stdio.h>
int main()
{
	int iCounter;
	for(iCounter = 0; iCounter<10; iCounter++)
	{
		if(iCounter %2 == 1)
			break;
		printf("%d",iCounter);
	}
	getchar();
	return 0;
}
//op: 0 