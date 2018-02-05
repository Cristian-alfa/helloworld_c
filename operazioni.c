#include <stdio.h>
int main ()
{
	int x, y, add, sot, mol, div, r;
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
	r = x % y;
	//output
	printf ("la somma e': %d\n", add);
	printf ("la differenza e': %d\n", sot);
	printf ("il prodotto e': %d\n", mol);
	printf ("il quoziente e': %d\n", div);
	printf ("il resto e': %d\n", r);

	return 0;
}
