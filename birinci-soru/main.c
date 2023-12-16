#include <stdio.h>
#include <stdlib.h>


int main(){

    int sayac=0, toplam=0;
    for(sayac;sayac<1000;sayac++)
    {
    	if(sayac%3==0 || sayac%5==0)
    	{
    		toplam=toplam+sayac;
		}
	}
	printf("toplam degeri %d'dir", toplam);
    return 0;
}

