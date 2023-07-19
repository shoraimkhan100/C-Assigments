#include<stdio.h>
int main(void)
{
	int arr[]={10,20,30,40,50};
	
	printf("%d\n",arr);	//100
	
	printf("%d\n",&arr);	//100
	
	printf("%d\n",arr+1);	//104
	
	printf("%d\n",&arr+1);	//120
	
	printf("%d\n",arr[2]);	//30
	
	printf("%d\n",arr[2]+1); //31
	
	printf("%d\n",arr[2]+2);//32
	
	printf("%d\n",&arr[2]);	//108
	
	printf("%d\n",&arr[2]+1);//112
	
	printf("%d\n",&arr[2]+2);//116
	
	printf("%d\n",&arr[0]);	//100
	
	printf("%d\n",arr+2);	//108
	
	printf("%d\n",&arr[0]+2);//108

//	printf("%d\n",++arr);	//error,'l'value required.

//	printf("%d",arr++);	// error,'l'value required.

	return 0;

}
