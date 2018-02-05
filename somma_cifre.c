#include <stdio.h>
int main ()
{
	int a, b, c, s;
	//variabili
	printf ("Inserire un numero formato da 3 cifre: ");
	scanf ("%d%d%d", &a, &b, &c);
	//somma
	s = a + b + c;
	printf ("La somma delle 3 cifre e': %d", s);

	return 0;
}
