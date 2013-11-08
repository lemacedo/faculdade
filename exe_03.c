#include<stdio.h>
#define TAM 3
int voto_cand,nulo,branco;
int voto_cand=0;
int nulo=1;
int branco=1;

struct CANDIDATO{
       char nome[30];
       char partido[20];
       char slogan[100];
       int idade,numero_cand,votos;
       };
typedef struct CANDIDATO Cand;

void cadastro(Cand*p){
       int i;
       for(i=1;i<=TAM;i++){
       printf(" DIGITE NOME:\n");
       gets(p->nome);
       printf(" DIGITE O PARTIDO:\n");
       gets(p->partido);
       printf(" DIGITE O SLOGAN:\n");
       gets(p->slogan);
       printf(" DIGITE IDADE:\n");
       scanf("%d",& p->idade);
       printf(" DIGITE NUMERO CANDIDATO:\n");
       scanf("%d",& p->numero_cand);
       p-> votos = 0;
	
		p++;
	
       getchar();

       system("clear");
       }//fecha o for
       }// fecha funcao cadastro


void votar(Cand*p){
       system("clear");

       int i,escolha,opc;
       
     // exibir(Candidato);

        printf("1-CANDIDATO\n");
        printf("2-BRANCO\n");
        printf("3-NULO\n");
        scanf("%d",&opc);
        switch(opc){
        getchar();

        case 1:		
			exibir(p);
			printf("ESCOLHA CANDIDATO:\n");
			scanf("%d",&escolha);
			
			printf("VOCE VOTOU CANDIDADATO: %d\nNOME %s\nQNT DE VOTOS %d\n\n",i,p-> nome,p-> votos);

			getchar();
			break;

        case 2:

			printf("VOCE VOTOU EM BRANCO\n\n");
			getchar();
			branco++;
			break;

        case 3:

			printf("VOCE VOTOU NULO\n\n");
			nulo++;
			break;
			getchar();

			}// fim switch case
			}// fecha for
			//}fecha funcao votar


void exibir(Cand*p){
        int i;
        for(i=0;i<=2;i++){
        printf("NUMERO CANDIDATO: %d\n"
               "NOME: %s\n"
               "PARTIDO: %s\n"
               "NUMERO DE VOTOS: %d\n\n",
               p->numero_cand,
               p->nome,
               p->partido,
               p-> votos);
              p++;

       }
       }// fecha funcao exibir


void finaliza(Cand*p){
        int i,soma;
        for(i=1;i<=TAM;i++){
        printf("NOME: %s\n"
               "PARTIDO: %s\n"
               "SLOGAN: %s\n"
               "IDADE: %d\n"
               "NUMERO DO CANDIDATO %d\n\n",
               p->nome,
               p->partido,
               p->slogan,
               p->idade,
               p->numero_cand);
               printf("PORCENTAGEM DE VOTOS %d\n",voto_cand%100);
               soma=voto_cand+nulo+branco;
               printf("TOTAL DE VOTOS %d\n",soma);
         }
         }

int main(){
        int op;
        Cand Candidato[TAM] = {
			{"Maria", "PT", "Um pais melhor",50,10,0},
			{"Joao", "PSDB", "Um pais Pior",40,20,0},
			{"Pedro", "PTT", "Um pais Mais ou menos ",30,20,0}
		};
        //cadastro(Candidato);
        do
        {
        printf("1- VOTAR:\n");
        printf("2- EXIBIR DADOS DA ELEICAO:\n");
        printf("3- FINALIZAR ELEICOES:\n");
        scanf("%d",&op);
        getchar();


        switch(op){
        case 1:
        printf(" ESCOLHA CANDIDATO:\n\n");
        exibir(Candidato);
        votar(Candidato);
        getchar();
        break;

        case 2:
        exibir(Candidato);
        getchar();
        break;

        case 3:
        finaliza(Candidato);
        break;
        }//  fecha o switch case
        } while (op!=3);
        getchar();
        }// fecha a main principal
