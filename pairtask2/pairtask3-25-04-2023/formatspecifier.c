#include<stdio.h>
int main()
{
	int ino = 10;
	unsigned int ino1 = 10;
	long int ino2 = 20;
	unsigned int ino3 = 20;
	char chchar = 'B';
	float ffloat = 3.14;
	double inum = 12345.678901234567890;
	
	printf("value of %%c is = %c\n",chchar);//B
	printf("value of %%i is = %i\n",ino);//10
	printf("value of %%d is = %d\n",ino);//10

	printf("value of %%o is = %o\n",ino1);//12
	printf("value of %%u is = %u\n",ino1);//10

	printf("value of %%x is = %x\n",ino1);//a
	printf("value of %%X is = %X\n",ino1);//A

	printf("value of %%ld is = %ld\n",ino2);//20
	printf("value of %%hd is = %hd\n",ino2);//20

	printf("value of %%lu is = %lu\n",ino3);//20
	printf("value of %%hu is = %hu\n",ino3);//20

	printf("value of %%f is = %f\n",ffloat);//3.140000
	printf("value of %%e is = %e\n",ffloat);//3.140000e+000
	printf("value of %%E is = %E\n",ffloat);//3.140000E+000

	printf("value of %%g is = %g\n",inum);//12345.7
	printf("value of %%G is = %G\n",inum);//12345.7
	printf("value of %%lf is = %lf",inum);//12345.678901
	
	getchar();
	return 0;
}