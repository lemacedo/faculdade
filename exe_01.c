#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 50


int main(){
	int vetor[50],aux=0;
	int *p = vetor;

	
	
	srand(time(NULL));
	
	for(aux = 0 ; aux < TAM ; aux++){
		vetor[aux] = 10+rand()%491;
	
		printf("%p  = %d \n", p, *p );
		p++;
	}
	
	
	return 0;
}
