#include<stdio.h>
int main()
{
	char arr[] = {'A','B','C','D','E'};

	char *pPtr = &arr[0];

	printf("%d\n",pPtr);//100
	printf("%c\n",*pPtr);//A

	printf("%d\n",pPtr+2);//102
	printf("%c\n",(*pPtr+2));//c

	printf("%d\n",pPtr);//100
	printf("%c\n",*pPtr);//A

	getchar();
	return 0;
}