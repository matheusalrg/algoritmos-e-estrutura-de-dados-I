#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// -------- ESTRUTURAS --------

typedef struct {
    int id;
    char nickname[100];
} Jogador;

typedef struct No {
    Jogador jogador;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
    No *fim;
} Fila;

// -------- PROTÓTIPOS --------

void inicializar(Fila *fila);
void inserir(Fila *fila, Jogador j);
void mostrar(Fila *fila);
void liberar_fila(Fila *fila);
void menu();

// -------- FUNÇÃO PRINCIPAL --------

int main() {

    Fila fila;
    inicializar(&fila);

    int opcao;
    Jogador j;

    do {

        menu();
        scanf("%d", &opcao);
        getchar();

        switch(opcao) {

            case 1:

                printf("\nID do jogador: ");
                scanf("%d", &j.id);
                getchar();

                printf("Nickname: ");
                fgets(j.nickname, sizeof(j.nickname), stdin);
                j.nickname[strcspn(j.nickname, "\n")] = '\0';

                inserir(&fila, j);

                printf("\nJogador adicionado a fila!\n");
                break;

            case 2:

                mostrar(&fila);
                break;

            case 3:

                printf("\nEncerrando programa...\n");
                break;

            default:

                printf("\nOpcao invalida!\n");
        }

    } while(opcao != 3);

    liberar_fila(&fila);

    return 0;
}

// -------- MENU --------

void menu() {

    printf("\n===== FILA DE MATCHMAKING =====\n");
    printf("1 - Adicionar jogador na fila\n");
    printf("2 - Mostrar fila\n");
    printf("3 - Sair\n");
    printf("Escolha: ");
}

// -------- INICIALIZAR FILA --------

void inicializar(Fila *fila) {

    fila->inicio = NULL;
    fila->fim = NULL;
}

// -------- INSERIR --------

void inserir(Fila *fila, Jogador j) {

    No *novo = (No *)malloc(sizeof(No));

    if(novo == NULL) {

        printf("Erro de alocacao de memoria!\n");
        return;
    }

    novo->jogador = j;
    novo->prox = NULL;

    if(fila->inicio == NULL) {

        fila->inicio = novo;
        fila->fim = novo;

    } else {

        fila->fim->prox = novo;
        fila->fim = novo;
    }
}

// -------- MOSTRAR FILA --------

void mostrar(Fila *fila) {

    if(fila->inicio == NULL) {

        printf("\nA fila de matchmaking esta vazia.\n");
        return;
    }

    printf("\n===== FILA DE MATCHMAKING =====\n");

    No *aux = fila->inicio;

    while(aux != NULL) {

        printf("ID: %d\n", aux->jogador.id);
        printf("Nickname: %s\n\n", aux->jogador.nickname);

        aux = aux->prox;
    }
}

// -------- LIBERAR FILA --------

void liberar_fila(Fila *fila) {

    No *aux = fila->inicio;

    while(aux != NULL) {

        No *temp = aux;
        aux = aux->prox;

        free(temp);
    }

    fila->inicio = NULL;
    fila->fim = NULL;
}
