#include <stdio.h>

/*

& merkin pois jättäminen aiheuttaa käännösvirheen:

ohjelma4.c: In function ‘main’:
ohjelma4.c:11:12: warning: format ‘%lf’ expects argument of type ‘double *’, but argument 2 has type ‘double’ [-Wformat=]
   11 |   scanf("%lf", num);
      |          ~~^   ~~~
      |            |   |
      |            |   double
      |            double *

*/

int main() {
	double num, sum = 0;
	int count = 0;

	printf("Anna positiivisia reaalilukuja. Negatiivine luku päättää ohjelman:\n");

	// do..while
	do {
		scanf("%lf", &num);

		if(num >= 0) {
			sum += num;
			count++;
		}
	} while (num > 0);

	if(count > 0) {
		double average = sum / count;
		printf("Annettujen positiivisten numeroiden keskiarvo: %.2lf\n", average);
	} else {
		printf("Positiivisia numeroita ei annettu\n");
	}

	return 0;
}
