#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// -------- ESTRUTURAS --------

typedef struct {
    int id;
    char nome[100];
} Mercenario;

typedef struct No {
    Mercenario mercenario;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
} Lista;

// -------- PROTÓTIPOS --------

void menu();
void contratar_mercenario(Lista *lista, Mercenario m);
void exibir_companhia(Lista lista);
void demitir_todos_mercenarios(Lista *lista);

// -------- FUNÇÃO PRINCIPAL --------

int main() {

    Lista lista;
    lista.inicio = NULL;

    Mercenario m;
    int opcao;

    do {

        menu();
        scanf("%d", &opcao);
        getchar();

        switch(opcao) {

            case 1:

                printf("\nID do mercenario: ");
                scanf("%d", &m.id);
                getchar();

                printf("Nome do mercenario: ");
                fgets(m.nome, sizeof(m.nome), stdin);
                m.nome[strcspn(m.nome, "\n")] = '\0';

                contratar_mercenario(&lista, m);
                break;

            case 2:
                exibir_companhia(lista);
                break;

            case 3:
                demitir_todos_mercenarios(&lista);

                if(lista.inicio == NULL)
                    printf("\nA companhia esta vazia!\n");

                break;

            case 4:
                printf("\nEncerrando programa...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");

        }

    } while(opcao != 4);

    // Garante que toda memória seja liberada
    demitir_todos_mercenarios(&lista);

    return 0;
}

// -------- MENU --------

void menu() {

    printf("\n========== COMPANHIA DE MERCENARIOS ==========\n");
    printf("1 - Contratar mercenario\n");
    printf("2 - Exibir companhia\n");
    printf("3 - Declarar falencia\n");
    printf("4 - Sair\n");
    printf("Escolha: ");
}

// -------- INSERIR NO FIM --------

void contratar_mercenario(Lista *lista, Mercenario m) {

    No *novo = (No*) malloc(sizeof(No));

    if(novo == NULL) {
        printf("Erro de alocacao!\n");
        return;
    }

    novo->mercenario = m;
    novo->prox = NULL;

    if(lista->inicio == NULL) {

        lista->inicio = novo;

    } else {

        No *aux = lista->inicio;

        while(aux->prox != NULL)
            aux = aux->prox;

        aux->prox = novo;
    }

    printf("\nMercenario contratado com sucesso!\n");
}

// -------- MOSTRAR LISTA --------

void exibir_companhia(Lista lista) {

    if(lista.inicio == NULL) {

        printf("\nA companhia esta vazia!\n");
        return;
    }

    printf("\n===== COMPANHIA =====\n");

    No *aux = lista.inicio;

    while(aux != NULL) {

        printf("ID: %d\n", aux->mercenario.id);
        printf("Nome: %s\n\n", aux->mercenario.nome);

        aux = aux->prox;
    }
}

// -------- DELETAR TODA A LISTA --------

void demitir_todos_mercenarios(Lista *lista) {

    if(lista->inicio == NULL) {

        printf("\nA companhia ja esta vazia!\n");
        return;
    }

    No *atual = lista->inicio;

    while(atual != NULL) {

        No *temp = atual;

        atual = atual->prox;

        free(temp);
    }

    lista->inicio = NULL;

    printf("\nTodos os mercenarios foram demitidos!\n");
}
