#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandom()
{
    return rand() % 6;
}

int main()
{
    srand(time(NULL));

    int mermi[6] = {0, 0, 0, 0, 0, 0};
    int mermiKonumu = generateRandom();
    mermi[mermiKonumu] = 1;
    int win1 = 0, win2 = 0, oyun = 0;
    int i;

    while (oyun < 10)
    {
        printf("Mermi Durumu: ");
        for (i = 0; i < 6; i++)
        {
            printf("%d ", mermi[i]);
        }
        printf("\n");

        if (mermiKonumu % 2 == 0)
        {
            win1++;
        }
        else
        {
            win2++;
        }

        oyun++;

        mermiKonumu = generateRandom();
        mermi[mermiKonumu] = 1;
    }

    printf("%d oyunda\nBirinci oyuncu: %d\nIkinci oyuncu: %d\nkadar kazandi\n", oyun, win1, win2);

    return 0;
}
