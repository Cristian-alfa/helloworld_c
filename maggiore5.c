#include <stdio.h>

int main ()
{
	int a, b, c, d, e, magg;
	//variabili
	printf ("Inserire 5 numeri: \n");
	scanf ("%d", &a);
        scanf ("%d", &b);
        scanf ("%d", &c);
        scanf ("%d", &d);
        scanf ("%d", &e);
	//condizioni
	magg = a;
	if (b > magg) {
		magg = b;
	}
	if (c > magg) {
		magg = c;
	}
	if (d > magg) {
		magg = d;
	}
	if (e > magg) {
		magg = e;
	}
	//output
	printf ("Il maggiore e': %d\n", magg);
	
	return 0;
}
