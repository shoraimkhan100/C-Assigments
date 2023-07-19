#pragma pack(3)
#include<stdio.h>
int main(void)
{
	struct demo 
	{
		char Chchar;
		double dNo;
	}obj;
	
	printf("%d",sizeof(obj));
	
	return 0;


}

