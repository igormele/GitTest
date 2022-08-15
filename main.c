#include <stdio.h>
#include <stdlib.h>

int sestej (int *a, int *b);

int odstej (int *a, int *b);
	//funkcija odsteje a in b.

int zmnozi (double *a, double *b);
	//funkcija zmnozi a in b.


int main()
{

	int x = 90;
	int z = 100;
	int w = 200;

	int rezultat = sestej(&x,&z);
	
	printf("Rezultat = %i\n",rezultat);

	printf("Test SSH: ... \n");
	printf("Test SSH: ...\n");
	printf("Test SSH: ...\n");
	printf("Test SSH: ...4556\n");
	printf("Test SSH: ...\n");


	printf("Test SSH1: ...\n");
	printf("Test SSH2: ..23.\n");
	printf("Test SSH3: ...\n");
	printf("Test SSH3: ... klemen\n");

	
	return 0;
}

int sestej(int *a, int *b){
	return *a + *b;
}

int odstej(int *a, int *b){
	return *a - *b;
}
