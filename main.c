#include <stdio.h>

int sestej (int *a, int *b);

int odstej (double *a, double *b);
	//funkcija odsteje a in b

int main()
{
	int x = 90;
	int z = 100;

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

	
	return 0;
}

int sestej(int *a, int *b){
	return *a + *b;
}

double odstej(int *a, int *b){
	return *a - *b;
}
