#include <stdio.h>

int main() {
    float alas, tinggi, luas;

    printf("Masukkan alas segitiga: ");
    scanf("%f", &alas);

    printf("Masukkan tinggi segitiga: ");
    scanf("%f", &tinggi);

    luas = (alas * tinggi) / 2;

    printf("Luas segitiga adalah: %.2f\n", luas);

    return 0;
}
