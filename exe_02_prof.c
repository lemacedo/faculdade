#include <stdio.h>
#define MAX 15

void exibir(int *p);
char *parOuImpar(int *p);

int main(){
	int aux, vet[MAX], *pont;
	
	pont = vet;
	
	for(aux = 0; aux < MAX; aux++){
		printf("Informe o %dº valor: ",aux+1);
		scanf("%d", pont);
		pont++;
	}
	
}
