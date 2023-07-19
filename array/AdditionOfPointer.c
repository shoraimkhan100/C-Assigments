#include<stdio.h>
int main(void)
{
	char arr[5]={'A','B','C','D','E'};
	
	char*pPtr=&arr[0];
	
	printf("%d\n",pPtr);	//100
	
	printf("%c\n",*pPtr);	//A
	
	printf("%d\n",pPtr+2);	//102
	
	printf("%c\n",*(pPtr+2)); //C
	
	printf("%d\n",pPtr);	//100
	
	printf("%c",*pPtr);	//A
	
	return 0;
	
	
}

