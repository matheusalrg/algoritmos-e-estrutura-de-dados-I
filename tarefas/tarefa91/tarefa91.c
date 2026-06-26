#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    int id;
    char descricao[100];
} Etapa;

typedef struct No {
    Etapa etapa;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
} Lista;

// Inicializa a lista
void inicializarLista(Lista *lista) {
    lista->inicio = NULL;
}

// Inserir no fim
void inserirFim(Lista *lista, Etapa etapa) {
    No *novo = (No *)malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro de alocação!\n");
        return;
    }

    novo->etapa = etapa;
    novo->prox = NULL;

    if (lista->inicio == NULL) {
        lista->inicio = novo;
        return;
    }

    No *aux = lista->inicio;

    while (aux->prox != NULL)
        aux = aux->prox;

    aux->prox = novo;
}

// Mostrar lista
void mostrarLista(Lista *lista) {
    if (lista->inicio == NULL) {
        printf("\nMissão vazia!\n");
        return;
    }

    No *aux = lista->inicio;

    printf("\n===== ETAPAS DA MISSÃO =====\n");

    while (aux != NULL) {
        printf("ID: %d\n", aux->etapa.id);
        printf("Descrição: %s\n\n", aux->etapa.descricao);
        aux = aux->prox;
    }
}

// Deletar o nó ANTES de um ID
void deletarAntes(Lista *lista, int id) {

    if (lista->inicio == NULL) {
        printf("\nLista vazia!\n");
        return;
    }

    // Referência é o primeiro nó
    if (lista->inicio->etapa.id == id) {
        printf("\nA etapa informada é a primeira. Não existe etapa anterior.\n");
        return;
    }

    No *anterior = NULL;
    No *atual = lista->inicio;
    No *referencia = lista->inicio->prox;

    while (referencia != NULL && referencia->etapa.id != id) {
        anterior = atual;
        atual = referencia;
        referencia = referencia->prox;
    }

    if (referencia == NULL) {
        printf("\nID não encontrado!\n");
        return;
    }

    // Caso a etapa a remover seja a primeira
    if (anterior == NULL) {
        lista->inicio = referencia;
    } else {
        anterior->prox = referencia;
    }

    printf("\nEtapa removida:\n");
    printf("ID: %d\n", atual->etapa.id);
    printf("Descrição: %s\n", atual->etapa.descricao);

    free(atual);
}

// Liberar memória
void liberarLista(Lista *lista) {
    No *aux = lista->inicio;

    while (aux != NULL) {
        No *temp = aux;
        aux = aux->prox;
        free(temp);
    }

    lista->inicio = NULL;
}

int main() {
    setlocale(LC_ALL, "");

    Lista lista;
    inicializarLista(&lista);

    int opcao;

    do {
        printf("\n===== GERENCIADOR DE MISSÕES =====\n");
        printf("1 - Inserir etapa no fim\n");
        printf("2 - Mostrar etapas\n");
        printf("3 - Deletar etapa ANTES de um ID\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {

        case 1: {
            Etapa e;

            printf("ID: ");
            scanf("%d", &e.id);
            getchar();

            printf("Descrição: ");
            fgets(e.descricao, sizeof(e.descricao), stdin);
            e.descricao[strcspn(e.descricao, "\n")] = '\0';

            inserirFim(&lista, e);
            break;
        }

        case 2:
            mostrarLista(&lista);
            break;

        case 3: {
            int id;

            printf("Informe o ID de referência: ");
            scanf("%d", &id);

            deletarAntes(&lista, id);
            break;
        }

        case 4:
            printf("\nEncerrando...\n");
            break;

        default:
            printf("\nOpção inválida!\n");
        }

    } while (opcao != 4);

    liberarLista(&lista);

    return 0;
}
