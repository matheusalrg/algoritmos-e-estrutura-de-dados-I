#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// -------- ESTRUTURAS --------

typedef struct {
    int id;
    char nome[100];
} Membro;

typedef struct No {
    Membro membro;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
} Lista;

// -------- PROTÓTIPOS --------

void menu();
void inserir_fim(Lista *lista, Membro m);
void mostrar_lista(Lista lista);
No *pesquisar(Lista *lista, int id);
void alterar_nome(Lista *lista, int id, char novo_nome[]);

// -------- FUNÇÃO PRINCIPAL --------

int main() {

    Lista lista;
    lista.inicio = NULL;

    int opcao;
    Membro m;
    int id;
    char novo_nome[100];

    do {

        menu();
        scanf("%d", &opcao);
        getchar();

        switch(opcao) {

            case 1:

                printf("\nDigite o ID do membro: ");
                scanf("%d", &m.id);
                getchar();

                printf("Digite o nome do membro: ");
                fgets(m.nome, sizeof(m.nome), stdin);
                m.nome[strcspn(m.nome, "\n")] = '\0';

                inserir_fim(&lista, m);
                break;

            case 2:

                mostrar_lista(lista);
                break;

            case 3:

                printf("\nInforme o ID do membro: ");
                scanf("%d", &id);
                getchar();

                printf("Novo nome: ");
                fgets(novo_nome, sizeof(novo_nome), stdin);
                novo_nome[strcspn(novo_nome, "\n")] = '\0';

                alterar_nome(&lista, id, novo_nome);
                break;

            case 4:

                printf("\nEncerrando programa...\n");
                break;

            default:

                printf("\nOpcao invalida!\n");
        }

    } while(opcao != 4);

    // Libera memória
    No *aux = lista.inicio;

    while(aux != NULL) {
        No *temp = aux;
        aux = aux->prox;
        free(temp);
    }

    return 0;
}

// -------- MENU --------

void menu() {

    printf("\n========== GUILDA ==========\n");
    printf("1 - Adicionar membro\n");
    printf("2 - Mostrar membros\n");
    printf("3 - Alterar nome\n");
    printf("4 - Sair\n");
    printf("Escolha: ");
}

// -------- INSERIR NO FIM --------

void inserir_fim(Lista *lista, Membro m) {

    No *novo = (No *) malloc(sizeof(No));

    if(novo == NULL) {
        printf("Erro de alocacao!\n");
        return;
    }

    novo->membro = m;
    novo->prox = NULL;

    if(lista->inicio == NULL) {

        lista->inicio = novo;

    } else {

        No *aux = lista->inicio;

        while(aux->prox != NULL)
            aux = aux->prox;

        aux->prox = novo;
    }

    printf("\nMembro adicionado com sucesso!\n");
}

// -------- MOSTRAR LISTA --------

void mostrar_lista(Lista lista) {

    if(lista.inicio == NULL) {

        printf("\nA guilda esta vazia!\n");
        return;
    }

    printf("\n===== MEMBROS DA GUILDA =====\n");

    No *aux = lista.inicio;

    while(aux != NULL) {

        printf("ID: %d\n", aux->membro.id);
        printf("Nome: %s\n\n", aux->membro.nome);

        aux = aux->prox;
    }
}

// -------- PESQUISAR --------

No *pesquisar(Lista *lista, int id) {

    No *aux = lista->inicio;

    while(aux != NULL) {

        if(aux->membro.id == id)
            return aux;

        aux = aux->prox;
    }

    return NULL;
}

// -------- ALTERAR NOME --------

void alterar_nome(Lista *lista, int id, char novo_nome[]) {

    No *membro = pesquisar(lista, id);

    if(membro == NULL) {

        printf("\nMembro nao encontrado!\n");
        return;
    }

    strcpy(membro->membro.nome, novo_nome);

    printf("\nNome alterado com sucesso!\n");
}
