#include<stdio.h>
int main()
{
	char chchar;

	printf("Entre character:\n");
	scanf("%c",&chchar);

	switch(chchar)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	
		printf("It is small letter vowel");
		break;
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		
		printf("It is capital letter vowel");
		break;
	default:
		printf("It is not vowel");
	}
	getchar();
	return 0;
}