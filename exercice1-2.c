#include <stdio.h>

unsigned int count = 0;

unsigned int puissance_rapide(unsigned int x, unsigned int n) {
    printf("Appel %u ^ %u\n", x, n);

    if (n == 0) {
        printf("return 1\n");
        count++;
        return 1;
    }
    else if (n % 2 == 0) {
        count++;
        unsigned int temp = puissance_rapide(x, n / 2);
        printf("%u ^ %u = (%u^%u)*(%u^%u)\n", x, n, x, n/2, x, n/2);
        return temp * temp;
    }
    else {
        count++;
        unsigned int temp = puissance_rapide(x, (n - 1) / 2);
        printf("%u ^ %u = %u*(%u^%u)*(%u^%u)\n", x, n, x, x, (n-1)/2, x, (n-1)/2);
        return x * temp * temp;
    }
}

int main() {
    unsigned int i=3;
    unsigned int x=6;
    unsigned int res = puissance_rapide(i, x);

    printf("res = %u\n", res);
    printf("Nombre d'appels = %u\n", count);

    return 0;
}
