#include<stdio.h>

int addition(int iNo1, int iNo2);
int substraction(int iNo1, int iNo2);
int multiplication(int iNo1, int iNo2);
int division(int iNo1, int iNo2);
int modulus(int iNo1, int iNo2);

int main()
{	
	int iNo1;
	int iNo2;
	int iAns;
	int iChoice;

	printf(" 1.Addition\n 2.Substration\n 3.Multiplication\n 4.Division\n 5.Modulus\n");
	printf("Entre your choice : \t");
	scanf("%d",&iChoice);

	if(iChoice <= 0 || iChoice >= 6)
	{
		printf("wrong choice\n");
		return -1;
	}

	printf("Entre two numbers:\t");
	scanf("%d %d",&iNo1 ,&iNo2 );

	switch(iChoice)
	{
	case 1:
		iAns = addition(iNo1,iNo2);
		break;
	
	case 2:
		iAns = substraction(iNo1,iNo2);
		break;

	case 3:
		iAns = multiplication(iNo1,iNo2);
		break;

	case 4:
		iAns = division(iNo1,iNo2);
		break;
	
	case 5:
		iAns = modulus(iNo1,iNo2);
		break;
	}
	printf("Answer is %d\n",iAns);
	getchar();
	return 0;
}

int addition(int iNo1, int iNo2)
{
	return iNo1 + iNo2;
}

int substraction(int iNo1, int iNo2)
{
	return iNo1 - iNo2;
}

int multiplication(int iNo1, int iNo2)
{
	return iNo1 * iNo2;
}

int division(int iNo1, int iNo2)
{
	return iNo1 / iNo2;
}

int modulus(int iNo1, int iNo2)
{
	return iNo1 % iNo2;
}
