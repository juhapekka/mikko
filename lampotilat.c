#include <stdio.h>

int main(void) {
	int celcius;
	printf("%7s%12s", "Celsius", "Fahrenheit");

	for (celcius = -100; celcius <= 100; celcius += 10) {
		printf("\n%5d%12.2lf", celcius, 1.8 * celcius + 32);
	}
	return 0;
}