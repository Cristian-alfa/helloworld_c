#include <stdio.h>

int main ()
{
	int a, s, x, y, z;
	//variabili
	printf ("Inserire un numero formato da 3 cifre: ");
	scanf ("%d", &a);
	//somma
  x = a % 10;
  a/=10;
  y = a % 10;
  a/=10;
  z = a % 10;
  s = x + y + z;
	printf ("La somma delle 3 cifre e': %d\n", s);

	return 0;
}
