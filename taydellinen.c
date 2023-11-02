#include <stdio.h>

int onkoLukuTaydellinen(int luku);

int main(void) {
    for (int i = 1; i <= 10000; i++) {
        if (onkoLukuTaydellinen(i)) {
            printf("\nLuku %d on täydellinen luku", i);
        }
    }
    return 0;
}

int onkoLukuTaydellinen(int luku) {
    int summa = 0;
    for (int i = 1; i <= luku / 2; i++) { // Maksimitekijä on luku/2
        if (luku % i == 0) {  // Jos i on luvun tekijä
            summa += i;
        }
    }

    if (summa == luku) {
        return 1;
    }
    return 0;
}
