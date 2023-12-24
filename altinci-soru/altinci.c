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
    const int simulasyon = 1000000;
    float sonuc = 0;
	int i = 0;
    for (i; i < simulasyon; i++)
    {
        while (!(switchh[0] == 1 && switchh[1] == 1 && switchh[2] == 1 &&
                 switchh[3] == 1 && switchh[4] == 1 && switchh[5] == 1))
        {
            int random = generateRandom();

            if (switchh[random] == 1)
            {
                switchh[random] = 0;
            }
            else
            {
                switchh[random] = 1;
            }

            sayac++;
        }
    }

    sonuc =(float)sayac/simulasyon;
    printf("Ortalama %f seferde 6 lamba da acik olur\n", sonuc);
    return 0;
}
