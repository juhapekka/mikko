#include <stdio.h>

int main(void) {
	int N;
	printf("\n%-7s%-7s%-7s%-7s", "N", "10*N", "100*N", "1000*N");

	for (N = 1; N < 11; N++) {
		printf("\n%-7d%-7d%-7d%-7d", N, 10*N, 100*N, 1000*N);
	}
	return 0;
}