#define MAX 10


typedef struct lista Lista;

Lista* cria_lista();
void liberar_lista(Lista* li);
int tam_lista(Lista* li);
int lista_cheia(Lista * li);
int lista_vazia(Lista* li);
