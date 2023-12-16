#include <stdio.h>
#include <stdlib.h>
/*Benim d���ncelerimin kar���k hali
Birinci oyuncu ve ikinci oyuncu s�rayla kafas�na s�kacak ve i�lerinden biri �ld��� anda oyun yeniden ba�layacak, oyun sayac� 1 artacak, kazanan oyuncunun da kazanma sayac� bir artacak.
Ayr�yeten bu olay max 6 hamlede ger�ekle�ecek, merminin nerede oldu�u random belirlenecek
Her at��tan sonra koullan�lan mermi bir daha kullan�lmayacak.
ChatGPT taraf�ndan d�zenlenmi� hali
1. Oyuncu ve Oyun Ba�lang�c�:
"	�ki oyuncu olu�turulur.
"	Oyun sayac� ve kazanma sayac� ba�lang��ta s�f�r olarak ayarlan�r.
2. Oyun D�ng�s� Ba�lat�l�r:
"	D�ng�, maksimum 6 hamlede ger�ekle�ecek �ekilde ayarlan�r.
"	Oyun ba�lad���nda, her turda bir oyuncu at�� yapacak.
3. At�� Fonksiyonu:
"	At�� fonksiyonu olu�turulur.
"	At�� fonksiyonu, oyuncunun mermiyi ate�leyip ate�lemedi�ini kontrol eder.
"	E�er oyuncu hayatta kal�rsa, oyuncu de�i�ir ve bir sonraki tur ba�lar.
"	E�er oyuncu �l�rse:
"	Oyun sayac� bir artar.
"	Kazanan oyuncunun kazanma sayac� bir artar.
"	Kullan�lan mermi bir daha kullan�lmamak �zere belirlenir.
"	Yeni bir oyun ba�lar.
4. Rastgele Mermi Yerle�tirme:
"	Oyun ba��nda ve her yeni oyun ba�lad���nda, mermi rastgele bir hazneye yerle�tirilir.
5. Oyun Biti� Ko�ullar�:
"	Maksimum 6 hamle tamamland���nda veya bir oyuncu kazand���nda oyun sona erer.
"	Oyun bitiminde kazanan oyuncu ekrana yazd�r�l�r.
"	Toplam oyun say�s� ve kazanma say�s� ekrana yazd�r�l�r.
"	
*/


int main() 
{
    char ad[20];
    srand(time(NULL));
    int adSayac = 0;
    int mertSayac = 0;
    int toplam_oyun_sayac = 0;
    int secilenSayi = 0;
    int hazneNo = rand() % 6;
    int mertSecim = rand() % 6;
    int kullanilanAd[secilenSayi];
    int kullanilanMert[mertSecim];

    printf("Ey aciz varlik, benim adim Yuceler Yucesi MERT Hazretleri. Sana verilen ad nedir?\n");
    scanf("%s", ad);
    printf("Hah! %s tam da sana uygun bir ad, berbat!\n", ad);
    printf("%s! sana 1-2-3-4-5-6 sayilarindan birini secmeni emrediyorum!\n", ad);
    do {
    printf("sayiyi gir");
    scanf("%d", &secilenSayi);
   	
    if (secilenSayi == hazneNo) {
        printf("\nhahahaha! oldun");
        mertSayac++;
    } 
	else {
        printf("sanslisin! benim siram");
        if (mertSecim == hazneNo) {
            printf("\n sen kazandin %s\n", ad);
            adSayac++;
        } else {
            printf("\nolmedim!\n");
        }
    }
}while(secilenSayi!=hazneNo);

    return 0;
}

