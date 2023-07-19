#include<stdio.h>

int main()
{
	printf("bytes of int:\t\t%lu bytes\n\n",sizeof(int));
	printf("bytes of short int:\t%d bytes\n\n",sizeof(short int));
	printf("bytes of long int:\t%d bytes\n\n",sizeof(long int));
	printf("bytes of long long int:\t%d bytes\n\n",sizeof(long long int));

	//short char and long char is not valid.
	printf("bytes of char:\t\t%d bytes\n\n",sizeof(char));
	//printf("bytes of char:\t\t%d bytes\n\n",sizeof(short char)); this statment showing error
	//printf("bytes of char:\t\t%d bytes\n\n",sizeof(long char)); this statment showing error
								
	//short float float is not valid.						
	printf("bytes of float:\t\t%d bytes\n\n",sizeof(float));
	printf("bytes of double:\t%d bytes\n\n",sizeof(long float));

	printf("bytes of void:\t\t%d bytes\n\n",sizeof(void));

	//short double is not valid.
	printf("bytes of double:\t%d bytes\n\n",sizeof(double));
	printf("bytes of long double:\t%d bytes\n\n",sizeof(long double));

	printf("bytes of long:\t\t%d bytes\n\n",sizeof(long));	
	printf("bytes of short:\t\t%d bytes\n\n",sizeof(short));

	getchar();
	return 0;
}