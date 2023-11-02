#include <stdio.h>
#include <string.h>

int main() {
    char binaariluku[100];
    int desimaali = 0;
    int perus = 1; // 2^0 alkaa arvolla 1

    printf("Syötä viisinumeroinen binääriluku: ");
    scanf("%s", binaariluku);

    int pituus = strlen(binaariluku);

    if (pituus != 5) {
        printf("binääriluku ei ole viisinumeroinen\n");
        return -1;
    }

    for (int i = 0; binaariluku[i] != '\0'; i++) {
        if (binaariluku[i] != '0' && binaariluku[i] != '1') {
            printf("syötetty merkkijono ei ole biääriluku\n");
            return -1;
        }
    }

    // Käydään binääriluku läpi takaperin
    for (int i = pituus - 1; i >= 0; i--) {
        if (binaariluku[i] == '1') {
            desimaali += perus;
        }
        perus *= 2;
    }

    printf("Kymmenjärjestelmän luku on: %d\n", desimaali);

    return 0;
}
