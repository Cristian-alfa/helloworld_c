#include <stdio.h>
int main ()
{
	int a, b;
	//variabili
	printf ("Inserisci un numero: ");
	scanf ("%d", &a);
	printf ("Inserisci un altro numero: ");
	scanf ("%d", &b);
	//condizione
	if (a > b) {
		printf ("Il maggiore e': %d\n", a);
	}
	else {
		printf ("Il maggiore e': %d\n", b);
	}
	
	return 0;
}
