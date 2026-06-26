#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct Item {
    int id;
    char nome[100];
    struct Item *prox;
} Item;

// Inserir no início
void inserirInicio(Item **lista, int id, char nome[]) {
    Item *novo = (Item *)malloc(sizeof(Item));

    novo->id = id;
    strcpy(novo->nome, nome);

    novo->prox = *lista;
    *lista = novo;
}

// Inserir no fim
void inserirFim(Item **lista, int id, char nome[]) {
    Item *novo = (Item *)malloc(sizeof(Item));

    novo->id = id;
    strcpy(novo->nome, nome);
    novo->prox = NULL;

    if (*lista == NULL) {
        *lista = novo;
        return;
    }

    Item *aux = *lista;

    while (aux->prox != NULL) {
        aux = aux->prox;
    }

    aux->prox = novo;
}

// Inserir após um ID
void inserirApos(Item *lista, int idReferencia, int idNovo, char nomeNovo[]) {
    Item *aux = lista;

    while (aux != NULL && aux->id != idReferencia) {
        aux = aux->prox;
    }

    if (aux == NULL) {
        printf("Fragmento com ID %d não encontrado.\n", idReferencia);
        printf("Catalisador não foi inserido.\n");
        return;
    }

    Item *novo = (Item *)malloc(sizeof(Item));

    novo->id = idNovo;
    strcpy(novo->nome, nomeNovo);

    novo->prox = aux->prox;
    aux->prox = novo;

    printf("Catalisador inserido com sucesso!\n");
}

// Mostrar lista
void mostrar(Item *lista) {
    if (lista == NULL) {
        printf("Inventário vazio.\n");
        return;
    }

    printf("\n===== INVENTÁRIO =====\n");

    while (lista != NULL) {
        printf("ID: %d\n", lista->id);
        printf("Nome: %s\n\n", lista->nome);
        lista = lista->prox;
    }
}

// Liberar memória
void liberar(Item *lista) {
    Item *aux;

    while (lista != NULL) {
        aux = lista;
        lista = lista->prox;
        free(aux);
    }
}

int main() {
    setlocale(LC_ALL, "");

    Item *inventario = NULL;

    int opcao;
    int id, idReferencia;
    char nome[100];

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Inserir item no início\n");
        printf("2 - Inserir item no fim\n");
        printf("3 - Inserir catalisador após um fragmento\n");
        printf("4 - Mostrar inventário\n");
        printf("5 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {

        case 1:
            printf("ID do item: ");
            scanf("%d", &id);
            getchar();

            printf("Nome do item: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0';

            inserirInicio(&inventario, id, nome);
            break;

        case 2:
            printf("ID do item: ");
            scanf("%d", &id);
            getchar();

            printf("Nome do item: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0';

            inserirFim(&inventario, id, nome);
            break;

        case 3:
            printf("ID do catalisador: ");
            scanf("%d", &id);
            getchar();

            printf("Nome do catalisador: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0';

            printf("Inserir após o fragmento de ID: ");
            scanf("%d", &idReferencia);

            inserirApos(inventario, idReferencia, id, nome);
            break;

        case 4:
            mostrar(inventario);
            break;

        case 5:
            printf("Encerrando o programa...\n");
            break;

        default:
            printf("Opção inválida!\n");
        }

    } while (opcao != 5);

    liberar(inventario);

    return 0;
}
