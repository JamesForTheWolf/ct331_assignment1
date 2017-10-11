#include <stdio.h>

int main(int arg, char* argc[]){
	int a;
	int* b;
	long c;
	double d;
	char ** e;


	printf("The size of int is %u\n", sizeof(a));
	printf("The size of int* is %u\n", sizeof(b));
	printf("The size of long is %u\n", sizeof(c));
	printf("The size of double is %u\n", sizeof(d));
	printf("The size of char ** is %u\n", sizeof(e));
}
