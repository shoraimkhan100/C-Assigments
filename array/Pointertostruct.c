#include<stdio.h>
struct demo
{
	int iNo;
	float fNo;
};
int main(void)
{
	struct demo obj;
	struct demo*pPtr=&obj;
	
	(*pPtr).iNo=10;
	pPtr->fNo=99.99f;
	
	printf("%d\n",pPtr->iNo);	//10
	printf("%f",(*pPtr).fNo);	//99.99
	
	return 0;
}
