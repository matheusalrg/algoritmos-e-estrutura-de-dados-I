#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char titulo[100];
    char status[50];
} Missao;

typedef struct no
{
    Missao missao;
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

void adicionarMissao(Lista *lista, Missao missao)
{
    No *novo = (No *)malloc(sizeof(No));

    if (novo == NULL)
    {
        printf("Erro de memoria!\n");
        return;
    }

    novo->missao = missao;
    novo->proximo = NULL;

    if (lista->inicio == NULL)
    {
        lista->inicio = novo;
        return;
    }

    No *atual = lista->inicio;

    while (atual->proximo != NULL)
    {
        atual = atual->proximo;
    }

    atual->proximo = novo;
}

No *pesquisar_missao(Lista *lista, int id)
{
    No *atual = lista->inicio;

    while (atual != NULL)
    {
        if (atual->missao.id == id)
        {
            return atual;
        }
        atual = atual->proximo;
    }

    return NULL;
}

void mostrarMissoes(Lista *lista)
{
    No *atual = lista->inicio;

    if (atual == NULL)
    {
        printf("\nNenhuma missao registrada!\n");
        return;
    }

    printf("\n===== DIARIO DE MISSOES =====\n");

    while (atual != NULL)
    {
        printf("ID: %d\n", atual->missao.id);
        printf("Titulo: %s\n", atual->missao.titulo);
        printf("Status: %s\n\n", atual->missao.status);

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
    Missao missao;
    No *resultado;
    int opcao;
    int idBusca;

    inicializarLista(&lista);

    do
    {
        printf("\n===== MENU =====\n");
        printf("1 - Adicionar Missao\n");
        printf("2 - Mostrar Missoes\n");
        printf("3 - Buscar Missao por ID\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("ID: ");
                scanf("%d", &missao.id);

                printf("Titulo: ");
                scanf(" %99[^\n]", missao.titulo);

                printf("Status: ");
                scanf(" %49[^\n]", missao.status);

                adicionarMissao(&lista, missao);
                break;

            case 2:
                mostrarMissoes(&lista);
                break;

            case 3:
                printf("Digite o ID da missao: ");
                scanf("%d", &idBusca);

                resultado = pesquisar_missao(&lista, idBusca);

                if (resultado != NULL)
                {
                    printf("\n===== MISSAO ENCONTRADA =====\n");
                    printf("ID: %d\n", resultado->missao.id);
                    printf("Titulo: %s\n", resultado->missao.titulo);
                    printf("Status: %s\n", resultado->missao.status);
                }
                else
                {
                    printf("Missao nao encontrada!\n");
                }
                break;

            case 4:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 4);

    liberarLista(&lista);

    return 0;
}
