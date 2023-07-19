#include<stdio.h>
int main()
{
	int arr[] = {10,20,30,40,50};

	printf("%d\n",arr);//100
	//1D naam(element address)

	printf("%d\n",&arr);//100
	//&1D naam -> Address of 1D

	printf("%d\n",arr + 1);//104
	//element size ne 1da pudhe

	printf("%d\n",&arr + 1);//20
	//1D size ne 1da pudhe

	printf("%d\n",arr[2]);//30
	//1D -> me 2 element naam(value)

	printf("%d\n",arr[2] + 1);//31
	//1D -> me 2 element naam(value + 1)

	printf("%d\n",arr[2] + 2);//32
	//1D -> me 2 element naam(value + 2)

	printf("%d\n",&arr[2]);//108
	//&(1D -> 2nd element naam)->element address

	printf("%d\n",&arr[2] + 1);//112
	//&(1D -> Me 2nd element size me 1 da puda)

	printf("%d\n",&arr[2] + 2);//116
	//&(1D -> me 2nd elemnt size me 2 da puda)

	printf("%d\n",&arr[0]);//100
	//&(1D -> me 0 element naam)-> element address

	printf("%d\n",arr + 2);//108
	//element size me 2 da pudhe

	printf("%d\n",&arr[0] + 2);
	//element size me 2 da pudhe

	/*
	printf("%d\n",++arr);
	arr = arr+1 => 100 = 100 + 1 +> 104

	printf("%d\n",arr++);
	arr = arr + 1 = 100 = 100 + 1 => 100 = 104
	*/
	getchar();
	return 0;
}