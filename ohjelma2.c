#include <stdio.h>

/*
Tulostaa
a
aa
aaa
aaaa
aaaaa
aaaaaa
aaaaaaa
aaaaaaaa
*/

int main() {
	int i, j, n = 8;

	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			printf("a");
		}
		printf("\n");
	}
	return 0;
}
