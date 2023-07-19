#include<stdio.h>
int main()
{
	int iValue1, iValue2, iValue3;
	printf("Entre value 1:\t");
	scanf("%d",&iValue1);
	
	printf("Entre value 2:\t");
	scanf("%d",&iValue2);

	printf("Entre value 3:\t");
	scanf("%d",&iValue3);
	
	printf("%d value is %d\n",iValue1);
	printf("%d value is %d\n",iValue2);
	printf("%d value is %d\n",iValue3);

	getchar();
	return 0;
}