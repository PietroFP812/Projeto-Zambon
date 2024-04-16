#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include "funcoes.h"


int main()
{
    setlocale(LC_ALL, "Portuguese Brasil");

    Lista* li = NULL;
    li = cria_lista();
    int operacao;
    int posicao;
    /*int insere = insere_lista_final(li, dados_aluno);
    insere = insere_lista_inicio(li, dados_aluno);
    insere = insere_lista_ordenada(li, dados_aluno);*/


    bool repeat = true;


        do{
            printf("                                             \n");
            printf("                                             \n");
            printf("                                             \n");
            printf("                     ((((((((((((((((((((((((((((((((((((.   \n");
            printf("                     ((((((((((((((((/**((((((((((((((**     \n");
            printf("                     ((((((((((((((*    (((((((((((((*  .    \n");
            printf("                     (((((((((((*      .((((((((((*.    (.   \n");
            printf("                     (((((((*.          ((((((((*   (( (.   \n");
            printf("                     (((((((*            ((((/*    (((( (.   \n");
            printf("                     (((((((* (((         (**    (((((( (.   \n");
            printf("                     (((((((((((.        (*,   (((((((( (.   \n");
            printf("                     ((((((((((((             .(((((((( (.   \n");
            printf("                     (*((((((((((*            (((((((((./    \n");
            printf("                     ( (((((((((((*(,        (((((((((*(*    \n");
            printf("                      ( (((((((((((*(       (((((((((((*.    \n");
            printf("                       (.((((((((((,      (((((((((( (*      \n");
            printf("                         (.(((((((((     ((((((((( (**       \n");
            printf("                           /(,.(((((((((((((((( ((*,         \n");
            printf("                               *((((     .(((/**             \n");
            printf("                         CENTRO UNIVERSITARIO UNIFACVEST      \n");
            printf("                                             \n");
            printf("                                             \n");
            printf("#####          Trabalho ORDENACAO E TECNICAS DE ARMAZENAMENTO          ######\n");
            printf("  Alunos: Eduardo de Quadra, Gustavo Mello, Pietro Fiorelli e Wallan Gabriel   \n");
            printf("#----------------------------  Turma: 0103N  ---------------------------------#\n");
            printf("#-----------------------------------------------------------------------------#\n");
            printf("#                       1 - Inserir Elemento no Final                         #\n");
            printf("#####                                                                         #\n");
            printf("#                       2 - Inserir Elemento no Inicio                        #\n");
            printf("#####                                                                         #\n");
            printf("#                       3 - Inserir Elemento Ordenado                         #\n");
            printf("#####                                                                         #\n");
            printf("#                       4 - Remover Elemento do Final                         #\n");
            printf("#####                                                                         #\n");
            printf("#                       5 - Remover Elemento do Início                        #\n");
            printf("#####                                                                         #\n");
            printf("#                       6 - Remover Elemento                                  #\n");
            printf("#####                                                                         #\n");
            printf("#                       7 - Consultar Elemento pela posicao                   #\n");
            printf("#####                                                                         #\n");
            printf("#                       8 - Consultar Elemento pela Matricula                 #\n");
            printf("#####                                                                         #\n");
            printf("#                       9 - Exbir Lista                                       #\n");
            printf("#####                                                                         #\n");
            printf("#                       10 - Exibir Tamanho da Lista                          #\n");
            printf("#####                                                                         #\n");
            printf("#                       11 - Sair                                             #\n");
            printf("#####                                                                         #\n");
            printf("#-----------------------------------------------------------------------------#\n");
            printf("#-----------------------------------------------------------------------------#\n");

            printf("Escolha a acao: \n");
            scanf("%d", &operacao);

            switch(operacao)
                {
                    case 1:
                        insere_lista_final(li);
                        break;

                    case 2:

                        break;

                    case 3:

                        break;

                    case 4:
                        remove_final_lista(li);

                        break;

                    case 5:

                        break;

                    case 6:
                        remove_final_lista(li);

                        break;

                    case 7:

                        break;

                    case 8:

                        break;

                    case 9:
                        imprime_lista(li);
                        break;

                    case 10:
                        tam_lista(li);
                        break;

                    case 11:
                        liberar_lista(li);
                        repeat = false;
                        break;


                    default:
                        printf("Valor invalido\n");

                }
            system("pause");
        }while (repeat);



}

