#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random()
	{
		srand(time(NULL));
		int random=rand() % 6;
		return random;
		
	}

int main() {

	int mermi[6]={0,0,0,0,0,0};
	int mermiKonumu= random();
    mermi[mermiKonumu]=1;

	int i;
 	for(i=0;i<6;i++)
 	{
 		printf("%d", mermi[i]);
	 }
    			
	return 0;
}