//1)
#include<stdio.h>
int main(void)
{
	 int iNo=10;
        int *pPtr=&iNo;
	
	iNo++;	//allowed,iNo is non-constant
	pPtr++;//allowed,pPtr is non-constant
	(*pPtr)++;//allowed,pointing to non-constant
	
//	printf("%d\n%d\n%d",iNo,pPtr,*pPtr);
	
	return 0;
}

//2)--------------------------------------------------------------------------
//	const int iNo=10;
//	const int*pPtr=&iNo;
//
//	iNo++;   //error,iNo is constant
//	pPtr++;  //allowed,pPtr is non-constant
//	(*pPtr)++ //error,pointing to constant 


//3)----------------------------------------------------------------------------
//	int iNo=10;
//	const int*pPtr=&iNo;


//	iNo++;	//allowed,iNo is non-constant
//	pPtr++;//allowed,pPtr is non-constant
//	(*pPtr)++;//error,pointing to constant
 
//4)-------------------------------------------------------------------------------
//	const int iNo=10;
//	int*pPtr=&iNo;


//	iNo++;//error,iNo is constant
//	pPtr++;//allowed,pPtr is non-constant
//	(*pPtr)++;//allowed,pointing to non-constant


//5)--------------------------------------------------------------------------------
//	int iNo=10;
//	int*const pPtr=&iNo;


//	iNo++;//allowed,iNo is non-constant
//	pPtr++;//error,pPtr is constant
//	(*pPtr)++;//allowed,pointing to non-constant


//6)--------------------------------------------------------------------------------
//	int iNo=10;
//	int const*const pPtr=&iNo;



//	iNo++;//allowed,iNo is non-constant
//	pPtr++;//error,pPtr is constant
//	(*pPtr)++;//error,pointing to constant
