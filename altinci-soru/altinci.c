#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool tum_lambalar_yandi_mi(int lambalar[]);

int main() {
    int max_deneme = 0;
    srand(time(NULL));
    int oyun_sayisi = 1000000;
    int i = 0;

    for (i = 0; i < oyun_sayisi; i++) {
        int deneme = 0;
        int lambalar[6] = {0, 0, 0, 0, 0, 0};

        while (!tum_lambalar_yandi_mi(lambalar)) {
            int deger = (rand() % 6) + 1;

            if (lambalar[deger - 1] == 1) {
                lambalar[deger - 1] = 0;
            } else {
                lambalar[deger - 1] = 1;
            }

            deneme++;
        }

        max_deneme += deneme;
    }

    double ortalama_deneme = (double)max_deneme / oyun_sayisi;
    printf("Ortalama deneme sayisi: %f", ortalama_deneme);

    return 0;
}

bool tum_lambalar_yandi_mi(int lambalar[]) {
    int i = 0;
    for (i = 0; i < 6; i++) {
        if (lambalar[i] == 0) {
            return false;
        }
    }
    return true;
}
