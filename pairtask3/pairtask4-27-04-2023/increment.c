#include<stdio.h>
int main()
{
	
	int ino=100;
	int ians1;
	int ians2;

	printf("%d\n",ino); //100

	ians1 = ++ino;
	printf("%d\n",ians1);//101
	printf("%d\n",ino);//101

	ians1 = ino++;
	printf("%d\n",ians1);//101
	printf("%d\n",ino);//102

	ians2 = ++ino;
	printf("%d\n",ians2);//103
	printf("%d\n",ino);//103

	ians2 = ino++;
	printf("%d\n",ians2);//103
	printf("%d\n",ino);//104

	++ino;
	printf("%d\n",ino);//105
	printf("%d\n",++ino);//106
	printf("%d\n",ino);//106

	ino++;
	printf("%d\n",ino);//107
	printf("%d\n",ino++);//107
	printf("%d\n",ino);//108

	printf("%d\n",ino + 1);//109

	getchar();
	return 1,-1 ;//run also with return 0;
}