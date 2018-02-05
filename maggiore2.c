#include <stdio.h>
int main ()
{
	int a, b, magg;
	//variabili
	printf ("Inserisci un numero: ");
	scanf ("%d", &a);
	printf ("Inserisci un altro numero: ");
	scanf ("%d", &b);
	//condizione
	magg = a;
	if (b > magg) {
		magg =b;
		}
	printf ("Il maggiore e': %d\n", magg); 
	
	return 0;
}
