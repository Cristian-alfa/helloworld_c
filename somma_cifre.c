#include <stdio.h>

int main ()
{
	int a, s, x, y, z;
	//variabili
	printf ("Inserire un numero formato da 3 cifre: ");
	scanf ("%d", &a);
  //verifica input
  if (a >= 0 && a <= 999){
	//somma
  x = a % 10;
  a/=10;
  y = a % 10;
  a/=10;
  z = a % 10;
  s = x + y + z;
	printf ("La somma delle 3 cifre e': %d\n", s);
  }
  else {
    printf ("Hai inserito un numero al di sotto dello zero o di piu' di tre cifre\n");
  }

	return 0;
}
