#include<stdio.h>
struct demo
{
	int iNo;
	float fNo;
};
int main()
{
	struct demo obj;
	struct demo *pPtr = &obj;
	(*pPtr).iNo = 10;
	pPtr -> fNo = 99.9f;
	
	printf("%d\n",pPtr -> iNo);
	printf("%f\n",(*pPtr).fNo);

	return 0;
}