#include <stdio.h>
#include <stdlib.h>

#include "constants.h"
#include "functions.h"


int main()
{

	int x = 90;
	int z = 100;

	int rezultat = sestej(&x,&z);
	
	printf("Rezultat = %i\n",rezultat);
	printf("Value max: %i\n", VALUE_max(x,z));

	
	return 0;
}
