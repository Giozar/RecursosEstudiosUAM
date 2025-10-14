#include <stdio.h>

int main()
{
	double arr[3] = {123, 456, 5632};

	// Memoria ocupada por todo el arreglo
	int tamarr = sizeof(arr);

	// Memoria ocupada por su primer elemento
	int tamarrp = sizeof(arr[0]);

	// División simple
	int longitud = tamarr / tamarrp;
	printf( "El arreglo ocupa %d bytes.\n"
			"La primer variable ocupa %d bytes.\n"
			"Entonces la longitud es: %d",
			tamarr, tamarrp, longitud);
	return 0;
}
