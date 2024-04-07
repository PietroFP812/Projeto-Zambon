#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10

/*Definindo um Tipo de Aluno
Elementos da lista: desta forma será possivel guardar vários tipos de dados.*/
struct aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};
//Definindo uma struct Lista
typedef struct lista Lista;

/*Implementando a Struct do Tipo Lista
Controlador: ira controlar o tamanho da lista
e a posicao dos elementos*/
struct lista{
    int qtd;
    struct aluno dados[MAX];
};

//Implementando a funcao criar lista
Lista* cria_lista(){
    Lista *li; //Declara ponteiro
    li = (Lista*)malloc(sizeof(struct lista));
    if(li != NULL)
        li->qtd = 0;
    return li;
}

//Implementando a funcao libera lista
void libera_lista(Lista* li){
    free(li);
}

//Implementando a funcao Tamanho da lista
int tamanho_lista(Lista* li){
    if(li == NULL)
        return -1;
    else
        return li->qtd;
}

//Implementando a funcao consulta consulta_lista_mat
int consulta_lista_mat(Lista* li, int mat, struct aluno *al){
    if(li == NULL)
        return 0;
    int i = 0;
    while(i<li->qtd)//elemento não encontrado
        return 0;

    *al = li->dados[i];
    return 1;
}

//Implementando a funcao Lista cheia
int lista_cheia(Lista* li){
    if(li == NULL)
        return -1;
    return (li->qtd == MAX);
}

//Implementando a funcao Lista vazia
int lista_vazia(Lista* li){
    if(li == NULL)
        return -1;
    return (li->qtd == 0);
}

//Implementando a funcao insere_lista_final
int insere_lista_final(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;
    if(li->qtd == MAX)//Lista cheia
        return 0;
    li->dados(li->qtd) = al;
    li->qtd++;
    return 1;
}



Lista* cria_lista();
void libera_lista(Lista* li);
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);
int insere_lista_final(Lista* li, struct aluno al);
int insere_lista_inicio(Lista* li, struct aluno al);
int insere_lista_ordenada(Lista* li, struct aluno al);
int remove_lista_final(Lista* li);
int remove_lista_inicio(Lista* li);
int remove_lista(Lista* li, int mat);
int consulta_lista_pos(Lista* li, int pos, struct aluno *al);
int consulta_lista_mat(Lista* li, int mat, struct aluno *al);

int main(){
    Lista* li = cria_lista();
     aluno* dados_aluno;
     libera_lista(li);
     int matricula_aluno, posicao;
     int x = tamanho_lista(li);
     x = lista_cheia(li);
     x = lista_vazia(li);
     int insere = insere_lista_final(li, dados_aluno);
     insere  = insere_lista_inicio(li, dados_aluno);
     insere = insere_lista_final(li, dados_aluno);
     int remove = remove_lista_inicio(li);
     remove = remove_lista_inicio(li);
     remove = remove_lista(li, matricula_aluno);
     int consulta = consulta_lista_pos(li, posicao, &dados_aluno);
     consulta = consulta_lista_mat(li, posicao, &dados_aluno);
}

void main()
{
    setlocale(LC_ALL,"");
    printf("                                             \n");
    printf("                                             \n");
    printf("                                             \n");
    printf("    ((((((((((((((((((((((((((((((((((((.   \n");
    printf("    ((((((((((((((((/**((((((((((((((**     \n");
    printf("    ((((((((((((((*    (((((((((((((*  .    \n");
    printf("    (((((((((((*      .((((((((((*.    (.   \n");
    printf("    (((((((*.          ((((((((*   (( (.   \n");
    printf("    (((((((*            ((((/*    (((( (.   \n");
    printf("    (((((((* (((         (**    (((((( (.   \n");
    printf("    (((((((((((.        (*,   (((((((( (.   \n");
    printf("    ((((((((((((             .(((((((( (.   \n");
    printf("    (*((((((((((*            (((((((((./    \n");
    printf("    ( (((((((((((*(,        (((((((((*(*    \n");
    printf("     ( (((((((((((*(       (((((((((((*.    \n");
    printf("      (.((((((((((,      (((((((((( (*      \n");
    printf("        (.(((((((((     ((((((((( (**       \n");
    printf("          /(,.(((((((((((((((( ((*,         \n");
    printf("              *((((     .(((/**             \n");
    printf("        CENTRO UNIVERSITÁRIO UNIFACVEST      \n");
    printf("                                             \n");
    printf("                                             \n");
    printf("#####           Trabalho ORDENACÃO E TÉCNICAS DE ARMAZENAMENTO           ######\n");
    printf("  Alunos: Eduardo de Quadra, Gustavo Mello, Pietro Fiorelli e Wallan Gabriel   \n");
    printf("#############################  Turma: 0103N  ##################################\n");
    printf("###############################################################################\n");
    printf("###############################################################################\n");
    printf("# 1 - Inserir Elemento no Final                                               #\n");
    printf("#####                                                                         #\n");
    printf("# 2 - Remover Elemento do Final                                               #\n");
    printf("#####                                                                         #\n");
    printf("# 3 - Consultar Elemento Pela Posição                                         #\n");
    printf("#####                                                                         #\n");
    printf("# 4 - Exibir Tamanho da Lista                                                 #\n");
    printf("# 5 - Sair                                                                    #\n");
    printf("###############################################################################\n");
    printf("###############################################################################\n");
    return 0;
}
