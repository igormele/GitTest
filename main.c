#include<stdio.h>

void sestej (int *a, int *b);

int main()
{
	printf("hello world");
	printf("hello world");
	return 0;
}

void sestej(int *a, int *b){
	*a += *b;
}
