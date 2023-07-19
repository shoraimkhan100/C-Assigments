#include<stdio.h>
int main(void)
{
        int iNo=10;
        int*pPtr=&iNo;

        printf("%d\n",iNo);	//10
        printf("%d\n",&iNo);	//100
        printf("%d\n",pPtr);	//100	
        printf("%d\n",&pPtr);	//200
        printf("%d\n",*pPtr);	//10

        *pPtr=20;
        printf("%d",*pPtr);	//20

        return 0;

}

