#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// -------- ESTRUTURAS --------

typedef struct {
    char nome[100];
    int custo_mana;
} Feitico;

typedef struct No {
    Feitico feitico;
    struct No *prox;
} No;

typedef struct {
    No *topo;
} Pilha;

// -------- PROTÓTIPOS --------

void inicializar(Pilha *pilha);
void push(Pilha *pilha, Feitico f);
void mostrar_pilha(Pilha *pilha);
void liberar_pilha(Pilha *pilha);
void menu();

// -------- FUNÇÃO PRINCIPAL --------

int main() {

    Pilha pilha;
    inicializar(&pilha);

    int opcao;
    Feitico f;

    do {

        menu();
        scanf("%d", &opcao);
        getchar();

        switch(opcao) {

            case 1:

                printf("\nNome do feitico: ");
                fgets(f.nome, sizeof(f.nome), stdin);
                f.nome[strcspn(f.nome, "\n")] = '\0';

                printf("Custo de mana: ");
                scanf("%d", &f.custo_mana);
                getchar();

                push(&pilha, f);

                printf("\nFeitico adicionado ao topo da pilha!\n");
                break;

            case 2:

                mostrar_pilha(&pilha);
                break;

            case 3:

                printf("\nEncerrando programa...\n");
                break;

            default:

                printf("\nOpcao invalida!\n");
        }

    } while(opcao != 3);

    liberar_pilha(&pilha);

    return 0;
}

// -------- MENU --------

void menu() {

    printf("\n===== PILHA DE COMANDOS DO ARCANISTA =====\n");
    printf("1 - Adicionar feitico\n");
    printf("2 - Mostrar pilha de comandos\n");
    printf("3 - Sair\n");
    printf("Escolha: ");
}

// -------- INICIALIZAR PILHA --------

void inicializar(Pilha *pilha) {

    pilha->topo = NULL;
}

// -------- EMPILHAR --------

void push(Pilha *pilha, Feitico f) {

    No *novo = (No *)malloc(sizeof(No));

    if(novo == NULL) {
        printf("Erro de alocacao de memoria!\n");
        return;
    }

    novo->feitico = f;
    novo->prox = pilha->topo;
    pilha->topo = novo;
}

// -------- MOSTRAR PILHA --------

void mostrar_pilha(Pilha *pilha) {

    if(pilha->topo == NULL) {

        printf("\nA pilha de comandos esta vazia.\n");
        return;
    }

    printf("\n===== PILHA DE COMANDOS =====\n");

    No *aux = pilha->topo;

    while(aux != NULL) {

        printf("Feitico: %s\n", aux->feitico.nome);
        printf("Custo de Mana: %d\n\n", aux->feitico.custo_mana);

        aux = aux->prox;
    }
}

// -------- LIBERAR PILHA --------

void liberar_pilha(Pilha *pilha) {

    No *aux = pilha->topo;

    while(aux != NULL) {

        No *temp = aux;
        aux = aux->prox;

        free(temp);
    }

    pilha->topo = NULL;
}
