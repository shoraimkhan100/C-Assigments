#include<stdio.h>

int main()
{
	
	//printf(""hello""); This code is not show output like I want.

	printf("hello\n");//hello	

	printf("hello\a\n");//hello

	printf("\"hello\"\n");//"hello"

	printf("\"hello\"\'\n");//"hello"'

	printf("\"hello\"\"\n");//"hello""

	printf("\"hello\?\"\n");//"hello?"

	printf("\"hello\\\"\n");//"hello\"

	printf("\"hello\"\n");//"hello"

	printf("\"hello\b\"\n");//"hell"

	printf("\"hello\f\"\n");//"hello♀"

	printf("\"hello\"\n");//"hello"
	
	printf("\"hello\r\"\n");//"hello

	printf("\"hello\t\"\n");//"hello  "

	printf("\"hello\v\"\n");//"hello♂"

	printf("\"hello\o\"\n");//"helloo"
	
	getchar();
	return 0;
}
