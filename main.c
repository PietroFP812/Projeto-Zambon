#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "funcoes.h"
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese Brasil");

    menu();

}

void menu() {

        int valor;
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
            printf("#                       2 - Remover Elemento do Final                         #\n");
            printf("#####                                                                         #\n");
            printf("#                       3 - Consultar Elemento Pela Posicao                   #\n");
            printf("#####                                                                         #\n");
            printf("#                       4 - Exibir Tamanho da Lista                           #\n");
            printf("#####                                                                         #\n");
            printf("#                       5 - Sair                                              #\n");
            printf("#-----------------------------------------------------------------------------#\n");
            printf("#-----------------------------------------------------------------------------#\n");

            int valor;

            printf("Escolha a acao: \n");
            scanf("%d", &valor);

            switch(valor)
                {
                    case 1:
                        printf("Inserir elemento - desenvolver\n");

                        break;

                    case 2:
                        printf("remover elemento do final - desenvolver\n");
                        break;

                    case 3:
                        printf("Consultar elemento - desenvolver\n");
                        break;

                    case 4:
                        printf("Tamanho da lista - desenvolver\n");
                        break;

                    case 5:

                        break;


                    default:
                        printf("Valor invalido\n");

                }
            system("pause");
        }while (repeat);
}
