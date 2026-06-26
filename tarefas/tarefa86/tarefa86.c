#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct Heroi {
    int id;
    char nome[100];
    struct Heroi *prox;
} Heroi;

// Adicionar no fim
void adicionarFim(Heroi **lista, int id, char nome[]) {
    Heroi *novo = (Heroi *)malloc(sizeof(Heroi));

    novo->id = id;
    strcpy(novo->nome, nome);
    novo->prox = NULL;

    if (*lista == NULL) {
        *lista = novo;
        return;
    }

    Heroi *aux = *lista;

    while (aux->prox != NULL) {
        aux = aux->prox;
    }

    aux->prox = novo;
}

// Inserir antes de um herói
void inserirAntes(Heroi **lista, int idVIP, int idNovo, char nomeNovo[]) {

    if (*lista == NULL) {
        printf("A formação está vazia.\n");
        return;
    }

    // VIP é o primeiro da lista
    if ((*lista)->id == idVIP) {
        Heroi *novo = (Heroi *)malloc(sizeof(Heroi));

        novo->id = idNovo;
        strcpy(novo->nome, nomeNovo);

        novo->prox = *lista;
        *lista = novo;

        printf("Guarda-costas inserido com sucesso!\n");
        return;
    }

    Heroi *anterior = *lista;
    Heroi *atual = (*lista)->prox;

    while (atual != NULL && atual->id != idVIP) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        printf("Herói VIP não encontrado.\n");
        printf("Guarda-costas não foi inserido.\n");
        return;
    }

    Heroi *novo = (Heroi *)malloc(sizeof(Heroi));

    novo->id = idNovo;
    strcpy(novo->nome, nomeNovo);

    novo->prox = atual;
    anterior->prox = novo;

    printf("Guarda-costas inserido com sucesso!\n");
}

// Mostrar formação
void mostrar(Heroi *lista) {

    if (lista == NULL) {
        printf("A formação está vazia.\n");
        return;
    }

    printf("\n===== FORMAÇÃO =====\n");

    while (lista != NULL) {
        printf("ID: %d\n", lista->id);
        printf("Nome: %s\n\n", lista->nome);
        lista = lista->prox;
    }
}

// Liberar memória
void liberar(Heroi *lista) {
    Heroi *aux;

    while (lista != NULL) {
        aux = lista;
        lista = lista->prox;
        free(aux);
    }
}

int main() {

    setlocale(LC_ALL, "");

    Heroi *formacao = NULL;

    int opcao;
    int id, idVIP;
    char nome[100];

    do {

        printf("\n===== MENU =====\n");
        printf("1 - Adicionar Herói no Fim da Formação\n");
        printf("2 - Adicionar Guarda-Costas (Inserir Antes)\n");
        printf("3 - Mostrar Formação\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {

        case 1:

            printf("ID do herói: ");
            scanf("%d", &id);
            getchar();

            printf("Nome do herói: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0';

            adicionarFim(&formacao, id, nome);

            break;

        case 2:

            printf("ID do guarda-costas: ");
            scanf("%d", &id);
            getchar();

            printf("Nome do guarda-costas: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0';

            printf("ID do herói VIP: ");
            scanf("%d", &idVIP);

            inserirAntes(&formacao, idVIP, id, nome);

            break;

        case 3:

            mostrar(formacao);

            break;

        case 4:

            printf("Encerrando o programa...\n");

            break;

        default:

            printf("Opção inválida!\n");
        }

    } while (opcao != 4);

    liberar(formacao);

    return 0;
}
