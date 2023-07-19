#include<stdio.h>
int main(void)
{
	struct demo1
	{
		char Chchar;
		double dNo;
	}obj1;
		
	printf("%d\n",sizeof(obj1));	//12
	printf("%d\n",sizeof(obj1.Chchar));//1
	
	struct demo2
	{
		char Chchar;
		int iNo;
	}obj2;
	
	printf("%d\n",sizeof(obj2));	//8
	
	struct demo3
	{
		int iNo;
		double dNo;
	}obj3;
	
	printf("%d\n",sizeof(obj3));	//12
	
	struct demo4
	{
		char Chchar1;
		char Chchar2;
	}obj4;
	
	printf("%d",sizeof(obj4));	//2
	
	return 0;

}





