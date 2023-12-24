#include <stdio.h>
#include <stdlib.h>

int russianPassian(int ilkSayi, int ikinciSayi) {
    int sonuc0 = 0;

    while (ilkSayi>=1) {
        if (ilkSayi % 2 == 1) {
            sonuc0 += ikinciSayi; 
        }
        ilkSayi /= 2;
        ikinciSayi *= 2;
    }

    return sonuc0;
}

int main() {
    int sayi1, sayi2;

    printf("Iki sayi girin: ");
    scanf("%d %d", &sayi1, &sayi2);

    int sonuc = russianPassian(sayi1, sayi2);

    printf("Sonuc: %d\n", sonuc);

    return 0;
}
