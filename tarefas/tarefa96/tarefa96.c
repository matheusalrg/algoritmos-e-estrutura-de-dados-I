#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// -------- ESTRUTURAS --------

typedef struct {
    int id;
    char nome[100];
} Monstro;

typedef struct No {
    Monstro monstro;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
} Lista;

// -------- PROTÓTIPOS --------

void menu();
void adicionarMonstro(Lista *lista, Monstro m);
void ordenarBestiario(Lista *lista);
void mostrarBestiario(Lista lista);
void liberarLista(Lista *lista);

// -------- FUNÇÃO PRINCIPAL --------

int main() {

    Lista lista;
    lista.inicio = NULL;

    int opcao;
    Monstro m;

    do {

        menu();
        scanf("%d", &opcao);
        getchar();

        switch(opcao) {

            case 1:

                printf("\nNivel de Ameaca (ID): ");
                scanf("%d", &m.id);
                getchar();

                printf("Nome do Monstro: ");
                fgets(m.nome, sizeof(m.nome), stdin);
                m.nome[strcspn(m.nome, "\n")] = '\0';

                adicionarMonstro(&lista, m);
                break;

            case 2:

                ordenarBestiario(&lista);
                printf("\nBestiario ordenado com sucesso!\n");
                break;

            case 3:

                mostrarBestiario(lista);
                break;

            case 4:

                printf("\nEncerrando programa...\n");
                break;

            default:

                printf("\nOpcao invalida!\n");
        }

    } while(opcao != 4);

    liberarLista(&lista);

    return 0;
}

// -------- MENU --------

void menu() {

    printf("\n========== BESTIARIO ==========\n");
    printf("1 - Adicionar Monstro\n");
    printf("2 - Ordenar Bestiario\n");
    printf("3 - Mostrar Bestiario\n");
    printf("4 - Sair\n");
    printf("Escolha: ");
}

// -------- ADICIONAR MONSTRO --------

void adicionarMonstro(Lista *lista, Monstro m) {

    No *novo = (No *) malloc(sizeof(No));

    if(novo == NULL) {
        printf("Erro de alocacao!\n");
        return;
    }

    novo->monstro = m;
    novo->prox = NULL;

    if(lista->inicio == NULL) {

        lista->inicio = novo;

    } else {

        No *aux = lista->inicio;

        while(aux->prox != NULL)
            aux = aux->prox;

        aux->prox = novo;
    }

    printf("\nMonstro adicionado com sucesso!\n");
}

// -------- ORDENAR (BUBBLE SORT) --------

void ordenarBestiario(Lista *lista) {

    if(lista->inicio == NULL || lista->inicio->prox == NULL)
        return;

    int trocou;

    do {

        trocou = 0;

        No *atual = lista->inicio;

        while(atual->prox != NULL) {

            if(atual->monstro.id > atual->prox->monstro.id) {

                Monstro temp = atual->monstro;
                atual->monstro = atual->prox->monstro;
                atual->prox->monstro = temp;

                trocou = 1;
            }

            atual = atual->prox;
        }

    } while(trocou);
}

// -------- MOSTRAR BESTIÁRIO --------

void mostrarBestiario(Lista lista) {

    if(lista.inicio == NULL) {

        printf("\nBestiario vazio!\n");
        return;
    }

    printf("\n===== BESTIARIO =====\n");

    No *aux = lista.inicio;

    while(aux != NULL) {

        printf("Nivel de Ameaca: %d\n", aux->monstro.id);
        printf("Nome: %s\n\n", aux->monstro.nome);

        aux = aux->prox;
    }
}

// -------- LIBERAR LISTA --------

void liberarLista(Lista *lista) {

    No *aux = lista->inicio;

    while(aux != NULL) {

        No *temp = aux;
        aux = aux->prox;

        free(temp);
    }

    lista->inicio = NULL;
}
