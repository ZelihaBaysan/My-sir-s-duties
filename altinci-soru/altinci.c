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

    int switchh[6] = {0, 0, 0, 0, 0, 0};
    int acikSwitch = generateRandom();
    switchh[acikSwitch] = 1;
    int sayac = 0;

    while (!(switchh[0] == 1 && switchh[1] == 1 && switchh[2] == 1 && switchh[3] == 1 && switchh[4] == 1 && switchh[5] == 1))
    {

        int acikSwitch = generateRandom();
        switchh[acikSwitch] = 1;

        sayac++;
    }

    printf("%d seferde tum switchler kapali olur\n", sayac);
    return 0;
}
