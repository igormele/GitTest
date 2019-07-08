#include <stdio.h>

int sestej (int *a, int *b);

int odstej (double *a, double *b);
	//funkcija odsteje a in b

int zmnozi (double *a, double *b);
	//funkcija zmnozi a in b

int pametno(int Xyz);
{
	return 0;
}

int main()
{
	int x = 90;
	int z = 100;
	int w = 200;

	int rezultat = sestej(&x,&z);
	
	printf("Rezultat = %i\n",rezultat);

	printf("Test SSH: ...");
	printf("Test SSH: ...");
	printf("Test SSH: ...");
	printf("Test SSH: ...4556");
	printf("Test SSH: ...");


	printf("Test SSH1: ...");
	printf("Test SSH2: ..23.");
	printf("Test SSH3: ...");
	printf("Test SSH3: ... klemen");

	
	return 0;
}

int sestej(int *a, int *b){
	return *a + *b;
}

double odstej(int *a, int *b){
	return *a - *b;
}
