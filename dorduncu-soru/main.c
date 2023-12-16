#include <stdio.h>
#include <stdlib.h>
/*Benim düþüncelerimin karýþýk hali
Birinci oyuncu ve ikinci oyuncu sýrayla kafasýna sýkacak ve içlerinden biri öldüðü anda oyun yeniden baþlayacak, oyun sayacý 1 artacak, kazanan oyuncunun da kazanma sayacý bir artacak.
Ayrýyeten bu olay max 6 hamlede gerçekleþecek, merminin nerede olduðu random belirlenecek
Her atýþtan sonra koullanýlan mermi bir daha kullanýlmayacak.
ChatGPT tarafýndan düzenlenmiþ hali
1. Oyuncu ve Oyun Baþlangýcý:
"	Ýki oyuncu oluþturulur.
"	Oyun sayacý ve kazanma sayacý baþlangýçta sýfýr olarak ayarlanýr.
2. Oyun Döngüsü Baþlatýlýr:
"	Döngü, maksimum 6 hamlede gerçekleþecek þekilde ayarlanýr.
"	Oyun baþladýðýnda, her turda bir oyuncu atýþ yapacak.
3. Atýþ Fonksiyonu:
"	Atýþ fonksiyonu oluþturulur.
"	Atýþ fonksiyonu, oyuncunun mermiyi ateþleyip ateþlemediðini kontrol eder.
"	Eðer oyuncu hayatta kalýrsa, oyuncu deðiþir ve bir sonraki tur baþlar.
"	Eðer oyuncu ölürse:
"	Oyun sayacý bir artar.
"	Kazanan oyuncunun kazanma sayacý bir artar.
"	Kullanýlan mermi bir daha kullanýlmamak üzere belirlenir.
"	Yeni bir oyun baþlar.
4. Rastgele Mermi Yerleþtirme:
"	Oyun baþýnda ve her yeni oyun baþladýðýnda, mermi rastgele bir hazneye yerleþtirilir.
5. Oyun Bitiþ Koþullarý:
"	Maksimum 6 hamle tamamlandýðýnda veya bir oyuncu kazandýðýnda oyun sona erer.
"	Oyun bitiminde kazanan oyuncu ekrana yazdýrýlýr.
"	Toplam oyun sayýsý ve kazanma sayýsý ekrana yazdýrýlýr.
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

