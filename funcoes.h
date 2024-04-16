#define MAX 50


typedef struct lista Lista;
void menu();/*deu pau*/

void insere_lista_final(Lista* li);
Lista* cria_lista();
int tam_lista(Lista* li);
void imprime_lista(Lista* li);
void remove_final_lista(Lista* li);
void liberar_lista(Lista* li);


int lista_cheia(Lista* li);
int lista_vazia(Lista* li);


