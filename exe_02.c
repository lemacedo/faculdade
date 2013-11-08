#include <stdio.h>
#include <stdlib.h>
#define TAM 15

void exibir(float *p);

int main(){
	float vetor[TAM],*p;
	int cont;
	
	p=vetor;
	//Sempre o Ponteiro precisa ser declarado para onde esta indicando
	//p = &vetor[0];

	for(cont = 1; cont <= TAM ; cont++){
		
		printf("Digite um valor: ");
		scanf("%f",p);
		getchar();
		p++;
	}
	
	exibir(vetor);
	//recebe o endereco do vetor
	
	return 0;	
}


void exibir(float *p){
	int cont;
	
	for(cont = 1;cont <= TAM ; cont++){
		printf("Valor %.2f \n ",*p);
		//*p pegar o q tah dentro do endereco de p
		//
	p++;
}
	
	
	}
