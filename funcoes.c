#include <stdlib.h>
#include <stdio.h>
#include "funcoes.h"

struct aluno{
    int matricula;
    char nome[5];
    float n1, n2, n3;
};
struct lista{
    int quantidade;
    struct aluno dados [MAX];
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
}

int lista_cheia(Lista* li){
    if(li == NULL)
        return -1;
    return (li->quantidade==MAX);
}

int lista_vazia(Lista* li){
    if(li == NULL)
        return -1;
}
