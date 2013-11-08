#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 50

int main(){
	int vet[MAX],aux , *pont;
	
	pont = vet; // Faz a referencia ao vetor
	
	srand(time(NULL));
	
	for(aux = 0; aux < MAX; aux++){
		*pont = 10 + rand() % 491;
		pont++;
	}
	
	pont = vet;

	/*for(aux = 0; aux < MAX; aux+=5){
		printf("%d \t %d \t %d \t %d \t %d \n",*pont, *(pont + 1), *(pont + 2), *(pont + 3), *(pont + 4));
		pont += 5;
	}*/
	
	for(aux = 0; aux < MAX; aux+=2){
		printf("%p - %d \t %p - %d \n", pont, *pont, (pont+1), *(pont + 1));
		pont += 2;
	}

	return 0;
}
