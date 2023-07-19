#include<stdio.h>
int main()
{
	int iNo = 10;
	char chchar = 'A';
	float fNo = 57.33f;
	double dNo = 69.33;

	printf("size of int is = %d\n",sizeof(int));
	printf("size of char is = %d\n",sizeof(char));
	printf("size of float is = %d\n",sizeof(float));
	printf("size of double is = %d\n",sizeof(double));

	printf("size of iNo is = %d\n",sizeof(iNo));
	printf("size of chchar is = %d\n",sizeof(chchar));
	printf("size of fNo is = %d\n",sizeof(fNo));
	printf("size of dNo is = %d\n",sizeof(dNo));

	printf("size of 100 is = %d\n",sizeof(100));
	printf("size of 'z' is = %d\n",sizeof('z'));
	printf("size of 99.99 is = %d\n",sizeof(99.99));
	printf("size of 99.99f is = %d\n",sizeof(99.99f));

	//printf("size of int is = %d",sizeof int); error
	printf("size of iNo is = %d\n",sizeof iNo);
	printf("size of 100 is = %d\n",sizeof 100);

	printf("size of iNo is = %d\n",iNo);
	printf("size of ++iNo is = %d\n",sizeof(++iNo));
	printf("size of iNo is = %d\n",iNo);

	getchar();
	return 0;
}
/*
outputs
size of int is = 4
size of char is = 1
size of float is = 4
size of double is = 8
size of iNo is = 4
size of chchar is = 1
size of fNo is = 4
size of dNo is = 8
size of 100 is = 4
size of 'z' is = 4
size of 99.99 is = 8
size of 99.99f is = 4
size of iNo is = 4
size of 100 is = 4
size of iNo is = 10
size of ++iNo is = 4
size of iNo is = 10
*/