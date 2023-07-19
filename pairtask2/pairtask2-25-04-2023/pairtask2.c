#include<stdio.h>
int main()
{
	printf("\temp\bin\new\n"); /*output is		emin
							ew
							*/
	printf("\\temp\\bin\\new\n"); //output like \temp\bin\new
	
	printf("/temp/bin/new"); //output is same as our code

	getchar();
	return 0;
}