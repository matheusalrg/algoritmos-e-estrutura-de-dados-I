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
void inserir_fim(Lista *lista, Mercenario m);
void mostrar_lista(Lista lista);
int tamanho(Lista lista);

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

                printf("\nDigite o ID do mercenario: ");
                scanf("%d", &m.id);
                getchar();

                printf("Digite o nome do mercenario: ");
                fgets(m.nome, sizeof(m.nome), stdin);
                m.nome[strcspn(m.nome, "\n")] = '\0';

                inserir_fim(&lista, m);
                break;

            case 2:

                mostrar_lista(lista);
                break;

            case 3:

                printf("\nQuantidade de mercenarios: %d\n", tamanho(lista));
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

    printf("\n========== GUILDA DE MERCENARIOS ==========\n");
    printf("1 - Contratar mercenario\n");
    printf("2 - Mostrar mercenarios\n");
    printf("3 - Mostrar tamanho da lista\n");
    printf("4 - Sair\n");
    printf("Escolha: ");
}

// -------- INSERIR NO FIM --------

void inserir_fim(Lista *lista, Mercenario m) {

    No *novo = (No *) malloc(sizeof(No));

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

void mostrar_lista(Lista lista) {

    if(lista.inicio == NULL) {

        printf("\nA lista esta vazia!\n");
        return;
    }

    printf("\n===== MERCENARIOS =====\n");

    No *aux = lista.inicio;

    while(aux != NULL) {

        printf("ID: %d\n", aux->mercenario.id);
        printf("Nome: %s\n\n", aux->mercenario.nome);

        aux = aux->prox;
    }
}

// -------- TAMANHO DA LISTA --------

int tamanho(Lista lista) {

    int contador = 0;

    No *aux = lista.inicio;

    while(aux != NULL) {

        contador++;
        aux = aux->prox;
    }

    return contador;
}
