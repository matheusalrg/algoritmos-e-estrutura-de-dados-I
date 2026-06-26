#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    int id;
    char nome[100];
} Jogador;

typedef struct No {
    Jogador jogador;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
} Lista;

// Inicializar lista
void inicializar(Lista *lista) {
    lista->inicio = NULL;
}

// Inserir no fim
void inserirFim(Lista *lista, Jogador jogador) {
    No *novo = (No *)malloc(sizeof(No));

    novo->jogador = jogador;
    novo->prox = NULL;

    if (lista->inicio == NULL) {
        lista->inicio = novo;
        return;
    }

    No *aux = lista->inicio;

    while (aux->prox != NULL) {
        aux = aux->prox;
    }

    aux->prox = novo;
}

// Remover o primeiro jogador
void removerInicio(Lista *lista) {

    if (lista->inicio == NULL) {
        printf("Não há jogadores na fila.\n");
        return;
    }

    No *aux = lista->inicio;

    printf("Jogador %s entrou na partida.\n", aux->jogador.nome);

    lista->inicio = aux->prox;

    free(aux);
}

// Mostrar fila
void mostrarFila(Lista *lista) {

    if (lista->inicio == NULL) {
        printf("A fila está vazia.\n");
        return;
    }

    No *aux = lista->inicio;

    printf("\n===== FILA DE ESPERA =====\n");

    while (aux != NULL) {
        printf("ID: %d\n", aux->jogador.id);
        printf("Nome: %s\n\n", aux->jogador.nome);
        aux = aux->prox;
    }
}

// Liberar memória
void liberarLista(Lista *lista) {
    No *aux;

    while (lista->inicio != NULL) {
        aux = lista->inicio;
        lista->inicio = lista->inicio->prox;
        free(aux);
    }
}

int main() {

    setlocale(LC_ALL, "");

    Lista fila;
    inicializar(&fila);

    Jogador jogador;
    int opcao;

    do {

        printf("\n===== MENU =====\n");
        printf("1 - Adicionar jogador ao fim da fila\n");
        printf("2 - Iniciar partida\n");
        printf("3 - Mostrar fila de espera\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {

        case 1:

            printf("ID do jogador: ");
            scanf("%d", &jogador.id);
            getchar();

            printf("Nome do jogador: ");
            fgets(jogador.nome, sizeof(jogador.nome), stdin);
            jogador.nome[strcspn(jogador.nome, "\n")] = '\0';

            inserirFim(&fila, jogador);

            break;

        case 2:

            removerInicio(&fila);

            break;

        case 3:

            mostrarFila(&fila);

            break;

        case 4:

            printf("Encerrando o programa...\n");

            break;

        default:

            printf("Opção inválida!\n");
        }

    } while (opcao != 4);

    liberarLista(&fila);

    return 0;
}
