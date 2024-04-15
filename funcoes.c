#include <stdlib.h>
#include <stdio.h>
#include "funcoes.h"


struct lista{
    int quantidade;
    struct aluno dados[MAX];
};

Lista* cria_lista(){
    Lista *li;
    li = (Lista*)malloc(sizeof(struct lista));
    if(li != NULL)
        li->quantidade = 0;
    return li;
}

void liberar_lista(Lista* li){
    free(li);
}

int tam_lista(Lista* li){
    if(li == NULL)
        return -1;
    else
        return li->quantidade;
}/*ok*/

int lista_cheia(Lista* li){
    if(li == NULL)
        return -1;
    return (li->quantidade==MAX);
}

int lista_vazia(Lista* li){
    if(li == NULL)
        return -1;
    return (li->quantidade == 0);
}

int insere_lista_final(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;

    if(li->quantidade == MAX)
        return 0;
    li->dados[li->quantidade] = al;
    li->quantidade++;
    return 1;
}

int insere_lista_inicio(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;
    if(li->quantidade == MAX)
        return 0;
    int i;
    for(i=li->quantidade-1; i>=0; i--)
        li->dados[i+1] = li->dados[i];
    li->dados[0] = al;
    li->quantidade++;
    return 1;
}
int insere_lista_ordenada(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;
    if(li->quantidade == MAX)
        return 0;

    int k,i = 0;

    while(i<li->quantidade && li->dados[i].matricula < al.matricula)
        i++;

    for (k=li->quantidade-1; k >= i; k--)
        li->dados[k+1] = li->dados[k];

    li->dados[i] = al;
    li->quantidade++;
    return 1;
}

void imprime_lista(Lista* li){
    if(li == NULL)
        return;

    int i;
    printf("------------------------------\n");
    for(i=0; i< li->quantidade; i++){
        printf("Matricula: %d\n",li->dados[i].matricula);
        printf("Nome:%s\n",li->dados[i].nome);
        printf("Notas: %.2f %.2f %.2f\n",li->dados[i].n1,li->dados[i].n2,li->dados[i].n3);
        printf("------------------------------\n");
    }
}


