#include <stdio.h>
#include <stdlib.h>
/*�ift Fibonacci Say�lar�
Fibonacci dizisindeki her yeni terim, �nceki iki terimin toplam�yla olu�turulur. 1 ve 2 ile ba�lad���m�zda, ilk 10 terim �u �ekildedir: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ... 
D�rt milyonu a�mayan Fibonacci dizisindeki terimleri d���nerek, �ift de�erli terimlerin toplam�n� bulun.
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
