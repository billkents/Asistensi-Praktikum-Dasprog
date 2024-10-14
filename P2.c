#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, bilangan, pengulangan, hasil=1;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    pengulangan = bilangan;

    for (i=1;i<=pengulangan;i++) {
        printf("%d", bilangan);
        hasil = hasil*i;
        if (i<pengulangan) {
            printf("*");
        }
        bilangan = (bilangan-1);
    }

    printf("=%d", hasil);
    return 0;
}
