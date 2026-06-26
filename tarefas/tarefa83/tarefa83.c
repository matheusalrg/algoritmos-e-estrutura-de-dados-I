#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    char nome[50];
} Jogador;

typedef struct no
{
    Jogador jogador;
    struct no *proximo;
} No;

typedef struct
{
    No *inicio;
} Fila;

void inicializarFila(Fila *fila)
{
    fila->inicio = NULL;
}

void inserirInicio(Fila *fila, Jogador jogador)
{
    No *novo = (No *)malloc(sizeof(No));

    if (novo == NULL)
    {
        printf("Erro de memoria!\n");
        return;
    }

    novo->jogador = jogador;
    novo->proximo = fila->inicio;
    fila->inicio = novo;

    printf("Jogador adicionado com prioridade (inicio da fila)!\n");
}

void inserirFim(Fila *fila, Jogador jogador)
{
    No *novo = (No *)malloc(sizeof(No));

    if (novo == NULL)
    {
        printf("Erro de memoria!\n");
        return;
    }

    novo->jogador = jogador;
    novo->proximo = NULL;

    if (fila->inicio == NULL)
    {
        fila->inicio = novo;
        return;
    }

    No *atual = fila->inicio;

    while (atual->proximo != NULL)
    {
        atual = atual->proximo;
    }

    atual->proximo = novo;

    printf("Jogador adicionado no fim da fila!\n");
}

void mostrarFila(Fila *fila)
{
    No *atual = fila->inicio;

    if (atual == NULL)
    {
        printf("\nFila vazia!\n");
        return;
    }

    printf("\n===== FILA DE JOGADORES =====\n");

    while (atual != NULL)
    {
        printf("Matricula: %d\n", atual->jogador.matricula);
        printf("Nome: %s\n\n", atual->jogador.nome);

        atual = atual->proximo;
    }
}

void liberarFila(Fila *fila)
{
    No *atual = fila->inicio;

    while (atual != NULL)
    {
        No *aux = atual;
        atual = atual->proximo;
        free(aux);
    }

    fila->inicio = NULL;
}

int main()
{
    Fila fila;
    Jogador jogador;
    int opcao;

    inicializarFila(&fila);

    do
    {
        printf("\n===== MENU =====\n");
        printf("1 - Adicionar jogador (inicio - prioridade)\n");
        printf("2 - Adicionar jogador (fim)\n");
        printf("3 - Mostrar fila\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("Matricula: ");
                scanf("%d", &jogador.matricula);

                printf("Nome: ");
                scanf(" %49[^\n]", jogador.nome);

                inserirInicio(&fila, jogador);
                break;

            case 2:
                printf("Matricula: ");
                scanf("%d", &jogador.matricula);

                printf("Nome: ");
                scanf(" %49[^\n]", jogador.nome);

                inserirFim(&fila, jogador);
                break;

            case 3:
                mostrarFila(&fila);
                break;

            case 4:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 4);

    liberarFila(&fila);

    return 0;
}
