#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nome[50];
} Aventureiro;

typedef struct no
{
    Aventureiro aventureiro;
    struct no *proximo;
} No;

typedef struct
{
    No *inicio;
} Lista;

void inicializarLista(Lista *lista)
{
    lista->inicio = NULL;
}

void adicionarAventureiro(Lista *lista, Aventureiro aventureiro)
{
    No *novo = (No *)malloc(sizeof(No));

    if (novo == NULL)
    {
        printf("Erro ao alocar memoria!\n");
        return;
    }

    novo->aventureiro = aventureiro;
    novo->proximo = lista->inicio;
    lista->inicio = novo;

    printf("Aventureiro adicionado com sucesso!\n");
}

void mostrarGrupo(Lista *lista)
{
    No *atual = lista->inicio;

    if (atual == NULL)
    {
        printf("\nGrupo vazio!\n");
        return;
    }

    printf("\n===== GRUPO DE AVENTUREIROS =====\n");

    while (atual != NULL)
    {
        printf("ID: %d\n", atual->aventureiro.id);
        printf("Nome: %s\n\n", atual->aventureiro.nome);

        atual = atual->proximo;
    }
}

void liberarLista(Lista *lista)
{
    No *atual = lista->inicio;

    while (atual != NULL)
    {
        No *aux = atual;
        atual = atual->proximo;
        free(aux);
    }

    lista->inicio = NULL;
}

int main()
{
    Lista lista;
    Aventureiro aventureiro;
    int opcao;

    inicializarLista(&lista);

    do
    {
        printf("\n===== MENU =====\n");
        printf("1 - Adicionar Aventureiro\n");
        printf("2 - Mostrar Grupo\n");
        printf("3 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("ID: ");
                scanf("%d", &aventureiro.id);

                printf("Nome: ");
                scanf(" %49[^\n]", aventureiro.nome);

                adicionarAventureiro(&lista, aventureiro);
                break;

            case 2:
                mostrarGrupo(&lista);
                break;

            case 3:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 3);

    liberarLista(&lista);

    return 0;
}
