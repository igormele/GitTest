#include <stdio.h>

int sestej (int *a, int *b);

int main()
{
	int x = 90;
	int z = 100;

	int rezultat = sestej(&x,&z);
	
	printf("Rezultat = %i\n",rezultat);
	return 0;
}

int sestej(int *a, int *b){
	return *a + *b;
}
