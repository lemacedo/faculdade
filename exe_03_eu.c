#include <stdio.h>
#include <stdlib.h>
#define TAM 3

struct Candidato{
	char nome[30],partido[20],slogan[100];
	int idade, numero_cand, votos;
};

typedef struct Candidato CAN;

void cadastro(CAN*p);
void votar(CAN*p);
void exibir(CAN*p);
char DB[3];

int main(){
	CAN Candidato[TAM];
	cadastro(Candidato);
	
	return 0;
}

void cadastro(CAN*p){
	int cont;
	for(cont = 1; cont <= TAM; cont ++){
		printf("Cadastrar Candidato \n\n Nome: ");
		gets(p->nome);
		printf("Informe o partido: ");
		gets(p->partido);
		printf("Informe o Slogan: ");
		gets(p->slogan);
		printf("Informe Idade: ");
		scanf("%d",&p->idade);
		printf("Informe o Numero do candidato: ");
		scanf("%d",&p->numero_cand);
	}	
}

void exibir(CAN*p){
	int cont;
	for(cont = 1; cont <= TAM; cont ++){
		printf("Numero: %d Nome: %s Partido: %s Total de Votos: %d",p->numero_cand, p->nome, p->partido, p-> votos );
		
		}
	
}





