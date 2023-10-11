#include <stdio.h>

int main() {
	int num, original, reversed = 0, remainder;

	printf("Anna a 5-numeroinen positiivinen kokonaisluku: ");
	scanf("%d", &num);

	// Saatiinko 5 numeroinen kokonaisluku
	if (num < 10000 || num > 99999) {
		printf("Syöte ei ole viisinumeroinen positiivinen kokonaisluku\n");
		return 1;  // exit the program
	}

	// myöhempää tulostamista varten laitetaan alkuperäinen luku talkteen
	original = num;

	// käännetään numero
	while (num != 0) {
		remainder = num % 10;
		reversed = reversed * 10 + remainder;
		num /= 10;
	}

	// Onko käännetty numero sama kuin alkuperäinen?
	if (original == reversed) {
		printf("Luku %d on palindromi\n", original);
	} else {
		printf("Luku %d ei ole palindromi\n", original);
	}

	return 0;
}
