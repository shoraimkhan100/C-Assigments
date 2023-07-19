#include<stdio.h>
int main()
{
	int arr[] = {10,20,30,40,50};

	printf("%d\n",&arr);//100		(100-120)
	//1D naam-> element ka address

	printf("%d\n",arr);//100
	//1D -> element ka address

	printf("%d\n",*arr);//10
	//1D *-> elemt ka naam(value)

	printf("%d\n",*arr+1);//11
	//1D *-> elemt ka naam(value + 1)

	printf("%d\n",arr+1);//104
	// elemt size se agge

	printf("%d\n",arr[0]);//10
	//1D -> 0th elemt ka naam(value)

	printf("%d\n",arr[0]+1);//11
	//1D -> oth elemt ka naam(value + 1)

	printf("%d\n",arr + 1);//20
	/*
	*(arr + 1)
	*(100 + 1 * sizeof(data type))
	*(100 + 1 * sizeof(int))
	*(100 + 1 * 4)
	*(100 + 4)
	*(104)
	20
	*/
	
	return 0;
}