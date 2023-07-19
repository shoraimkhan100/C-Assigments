#include<stdio.h>
int main()
{
	int iCounter;
	for(iCounter = 0; iCounter<10; iCounter++)
	{
		if(iCounter %2 == 0)
			continue;
		printf("%d",iCounter);
	}
	getchar();
	return 0;
}
//op: 1 3 5 7 9