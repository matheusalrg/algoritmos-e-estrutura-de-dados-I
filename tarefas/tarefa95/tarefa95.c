#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// -------- ESTRUTURAS --------

typedef struct {
    int id;
    char tipo[100];
} Inimigo;

typedef struct No {
    Inimigo inimigo;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
} Lista;

// -------- PROTÓTIPOS --------

void menu();
void inserir_fim(Lista *lista, Inimigo i);
void mostrar_lista(Lista lista);
Lista criar_lista(int n);
void liberar_lista(Lista *lista);

// -------- FUNÇÃO PRINCIPAL --------

int main() {

    Lista lista;
    lista.inicio = NULL;

    int opcao, quantidade;

    do {

        menu();
        scanf("%d", &opcao);
        getchar();

        switch(opcao) {

            case 1:

                printf("\nQuantidade de inimigos da nova onda: ");
                scanf("%d", &quantidade);
                getchar();

                // Libera a lista antiga
                liberar_lista(&lista);

                // Cria a nova lista
                lista = criar_lista(quantidade);

                printf("\nNova onda criada com sucesso!\n");
                break;

            case 2:

                mostrar_lista(lista);
                break;

            case 3:

                printf("\nEncerrando programa...\n");
                break;

            default:

                printf("\nOpcao invalida!\n");
        }

    } while(opcao != 3);

    liberar_lista(&lista);

    return 0;
}

// -------- MENU --------

void menu() {

    printf("\n========== GERENCIADOR DE INIMIGOS ==========\n");
    printf("1 - Iniciar nova onda\n");
    printf("2 - Mostrar inimigos\n");
    printf("3 - Sair\n");
    printf("Escolha: ");
}

// -------- INSERIR NO FIM --------

void inserir_fim(Lista *lista, Inimigo i) {

    No *novo = (No *) malloc(sizeof(No));

    if(novo == NULL) {
        printf("Erro de alocacao!\n");
        return;
    }

    novo->inimigo = i;
    novo->prox = NULL;

    if(lista->inicio == NULL) {

        lista->inicio = novo;

    } else {

        No *aux = lista->inicio;

        while(aux->prox != NULL)
            aux = aux->prox;

        aux->prox = novo;
    }
}

// -------- CRIAR LISTA --------

Lista criar_lista(int n) {

    Lista lista;
    lista.inicio = NULL;

    Inimigo i;

    for(int cont = 1; cont <= n; cont++) {

        printf("\nInimigo %d\n", cont);

        printf("ID: ");
        scanf("%d", &i.id);
        getchar();

        printf("Tipo: ");
        fgets(i.tipo, sizeof(i.tipo), stdin);
        i.tipo[strcspn(i.tipo, "\n")] = '\0';

        inserir_fim(&lista, i);
    }

    return lista;
}

// -------- MOSTRAR LISTA --------

void mostrar_lista(Lista lista) {

    if(lista.inicio == NULL) {

        printf("\nNenhum inimigo na fase.\n");
        return;
    }

    printf("\n===== INIMIGOS DA ONDA =====\n");

    No *aux = lista.inicio;

    while(aux != NULL) {

        printf("ID: %d\n", aux->inimigo.id);
        printf("Tipo: %s\n\n", aux->inimigo.tipo);

        aux = aux->prox;
    }
}

// -------- LIBERAR LISTA --------

void liberar_lista(Lista *lista) {

    No *aux = lista->inicio;

    while(aux != NULL) {

        No *temp = aux;
        aux = aux->prox;
        free(temp);
    }

    lista->inicio = NULL;
}
