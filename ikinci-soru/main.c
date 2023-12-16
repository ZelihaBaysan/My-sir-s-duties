#include <stdio.h>
#include <stdlib.h>
/*Çift Fibonacci Sayýlarý
Fibonacci dizisindeki her yeni terim, önceki iki terimin toplamýyla oluþturulur. 1 ve 2 ile baþladýðýmýzda, ilk 10 terim þu þekildedir: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ... 
Dört milyonu aþmayan Fibonacci dizisindeki terimleri düþünerek, çift deðerli terimlerin toplamýný bulun.
*/

int main() {
	long long int ilk=1, ikinci=2, ucuncu=0, toplam=0;
	while(ilk<4000000)
	{
		ucuncu=ilk+ikinci;
		ilk=ikinci;
		ikinci=ucuncu;
		
		if(ilk%2==0)
		toplam+=ilk;
	}
	printf("4000000'a kadar olan cift fibonacci sayilarinin toplami %lld'dir",toplam);
	return 0;
}
