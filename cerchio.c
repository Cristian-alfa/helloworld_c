#include <stdio.h>
int main ()
{
	int r;
	double p, c, a;
	//constante
	p = 3.14;
	//variabile
	printf ("inserisci il raggio: ");
	scanf ("%d", &r);
	//operazioni
	c = 2. * p * r;
	a = p* r* r;
	//output
	printf ("La circonferenza del cerchio di raggio %d e': %f\n", r, c);
	printf ("La superficio del cerchio di raggio %d e': %f\n", r, a);

	return 0;
}	
