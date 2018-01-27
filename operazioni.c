#include <stdio.h>
int main ()
{
	int x, y, add, sot, mol;
	float div;
	//variabili
	printf ("inserisci il primo numero: ");
	scanf ("%d", &x);
	printf ("inserisci il secondo numero: ");
	scanf ("%d", &y);
	//operazioni
	add = x + y;
	sot = x - y;
	mol = x * y;
	div = x / y;
	//output
	printf ("la somma e': %d\n", add);
	printf ("la differenza e': %d\n", sot);
	printf ("il prodotto e': %d\n", mol);
	printf ("il quoziente e': %f\n", div);

	return 0;
}
