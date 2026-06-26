#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nome[50];
} Movimento;

typedef struct no
{
    Movimento movimento;
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

void inserirInicio(Lista *lista, Movimento movimento)
{
    No *novo = (No *)malloc(sizeof(No));

    if (novo == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return;
    }

    novo->movimento = movimento;
    novo->proximo = lista->inicio;
    lista->inicio = novo;

    printf("Movimento inserido com sucesso!\n");
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
    Movimento movimento;
    int opcao;

    inicializarLista(&lista);

    do
    {
        printf("\n===== MENU =====\n");
        printf("1 - Inserir novo movimento\n");
        printf("2 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            printf("ID do movimento: ");
            scanf("%d", &movimento.id);

            printf("Nome do movimento: ");
            scanf(" %49[^\n]", movimento.nome);

            inserirInicio(&lista, movimento);
        }
        else if (opcao != 2)
        {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 2);

    liberarLista(&lista);

    return 0;
}
