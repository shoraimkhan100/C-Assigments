#include<stdio.h>
int main()
{
	
	int ino=100;
	int ians1;
	int ians2;

	printf("%d\n",ino); //100

	ians1 = --ino;
	printf("%d\n",ians1);//99
	printf("%d\n",ino);//99

	ians1 = ino--;
	printf("%d\n",ians1);//99
	printf("%d\n",ino);//98

	ians2 = --ino;
	printf("%d\n",ians2);//97
	printf("%d\n",ino);//97

	ians2 = ino--;
	printf("%d\n",ians2);//97
	printf("%d\n",ino);//96

	--ino;
	printf("%d\n",ino);//95
	printf("%d\n",--ino);//94
	printf("%d\n",ino);//94

	ino--;
	printf("%d\n",ino);//93
	printf("%d\n",ino--);//93
	printf("%d\n",ino);//92

	printf("%d\n",ino - 1);//91

	getchar();
	return 1,-1 ;//run also with return 0;
}