#include <stdlib.h>
#include <stdio.h>
#include "funcoes.h"

/*definição do objeto aluno e suas caracteristicas*/
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
}aluno;

/*definição das caracteristicas das listas*/
struct lista{
    int quantidade;
    struct aluno dados[MAX];
};

/*cria lista, utilizado para armazenar os dados dos alunos*/
Lista* cria_lista(){
    Lista *li;
    li = (Lista*)malloc(sizeof(struct lista));
    if(li != NULL)
        li->quantidade = 0;
    return li;
}/*ok*/

/*utilizado na operação 1 - serve para pegar os dados do aluno e adicionar na lista*/
void insere_lista_final(Lista* li){
    if(li != NULL && li->quantidade < MAX){
        printf("\nDigite a matricula do aluno: ");
        scanf("%d", &li->dados[li->quantidade].matricula);
        printf("\nDigite o nome: ");
        scanf("%s", &li->dados[li->quantidade].nome);
        printf("\nDigite o valor da primeira nota: ");
        scanf("%d",&li->dados[li->quantidade].n1);
        printf("\nDigite o valor da segunda nota: ");
        scanf("%d",&li->dados[li->quantidade].n2);
        printf("\nDigite o valor da terceira nota:");
        scanf("%d",&li->dados[li->quantidade].n3);
        li->quantidade++;
    }else{
        printf("Lista Cheia!\n");
    }
}/*ok*/

/*utilizado na operação 11 ao fechar o código - Limpa a lista*/
void liberar_lista(Lista* li){
    free(li);
}/*ok*/

/*utilizado na operação 10 - retornando a quantidade de objetos na lista*/
int tam_lista(Lista* li){


    if(li != NULL){
        int x;
        x = li->quantidade;
        printf("A lista conta com %d valor(es)!",x);

    }else{
        return 0;
    }
}/*ok*/



/*utilizado na operação 4 - elimina o elemento na ultima casa da lista*/
void remove_final_lista(Lista* li){
    if(li != NULL && li->quantidade > 0){
        li->quantidade--;
    }else{
        printf("Lista Vazia!\n");
    }
    li->quantidade = li->quantidade < 0 ? 0 : li->quantidade;
}

/*utilizado na operqação 9 -  apresenta os valores da lista*/
void imprime_lista(Lista* li){
    if(li != NULL && li->quantidade > 0){
        int i;

        for(i=0; i< li->quantidade; i++){
            printf("------------------------------\n");
            printf("Matricula: %d\n",li->dados[i].matricula);
            printf("Nome:%s\n",li->dados[i].nome);
            printf("Notas: %.2f %.2f %.2f\n",li->dados[i].n1,li->dados[i].n2,li->dados[i].n3);
            printf("------------------------------\n");
        }
    }else{
            printf("Lista Vazia!\n");
         }
}/*ok*/


