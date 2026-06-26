#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// -------- ESTRUTURAS --------

typedef struct {
    int id;
    char nickname[100];
} Jogador;

typedef struct No {
    Jogador jogador;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
    No *fim;
} Fila;

// -------- PROTÓTIPOS --------

void inicializar(Fila *fila);
int estaVazia(Fila *fila);
void inserir(Fila *fila, Jogador j);
Jogador remover(Fila *fila);
Jogador verInicio(Fila *fila);
void mostrar(Fila *fila);
void liberar_fila(Fila *fila);
void menu();

// -------- FUNÇÃO PRINCIPAL --------

int main() {

    Fila fila;
    inicializar(&fila);

    int opcao;
    Jogador j;

    do {

        menu();
        scanf("%d", &opcao);
        getchar();

        switch(opcao) {

            case 1:

                printf("\nID do jogador: ");
                scanf("%d", &j.id);
                getchar();

                printf("Nickname: ");
                fgets(j.nickname, sizeof(j.nickname), stdin);
                j.nickname[strcspn(j.nickname, "\n")] = '\0';

                inserir(&fila, j);

                printf("\nJogador adicionado a fila!\n");
                break;

            case 2:

                j = remover(&fila);

                if(j.id != -1) {

                    printf("\nO jogador %s (ID: %d) foi removido da fila e entrou em uma partida.\n",
                           j.nickname, j.id);
                }

                break;

            case 3:

                mostrar(&fila);
                break;

            case 4:

                if(estaVazia(&fila))
                    printf("\nSIM, a fila esta vazia.\n");
                else
                    printf("\nNAO, a fila contem jogadores.\n");

                break;

            case 5:

                j = verInicio(&fila);

                if(j.id != -1) {

                    printf("\nO proximo jogador a entrar na partida e: %s (ID: %d)\n",
                           j.nickname, j.id);

                } else {

                    printf("\nA fila de matchmaking esta vazia.\n");
                }

                break;

            case 6:

                printf("\nEncerrando programa...\n");
                break;

            default:

                printf("\nOpcao invalida!\n");
        }

    } while(opcao != 6);

    liberar_fila(&fila);

    return 0;
}

// -------- MENU --------

void menu() {

    printf("\n===== FILA DE MATCHMAKING =====\n");
    printf("1 - Adicionar jogador na fila\n");
    printf("2 - Remover jogador da fila\n");
    printf("3 - Mostrar fila\n");
    printf("4 - Verificar se a fila esta vazia\n");
    printf("5 - Ver quem e o proximo da fila\n");
    printf("6 - Sair\n");
    printf("Escolha: ");
}

// -------- INICIALIZAR FILA --------

void inicializar(Fila *fila) {

    fila->inicio = NULL;
    fila->fim = NULL;
}

// -------- VERIFICAR FILA VAZIA --------

int estaVazia(Fila *fila) {

    return (fila->inicio == NULL);
}

// -------- INSERIR --------

void inserir(Fila *fila, Jogador j) {

    No *novo = (No *)malloc(sizeof(No));

    if(novo == NULL) {

        printf("Erro de alocacao de memoria!\n");
        return;
    }

    novo->jogador = j;
    novo->prox = NULL;

    if(estaVazia(fila)) {

        fila->inicio = novo;
        fila->fim = novo;

    } else {

        fila->fim->prox = novo;
        fila->fim = novo;
    }
}

// -------- REMOVER --------

Jogador remover(Fila *fila) {

    Jogador erro;
    erro.id = -1;
    strcpy(erro.nickname, "");

    if(estaVazia(fila)) {

        printf("\nA fila de matchmaking esta vazia.\n");
        return erro;
    }

    No *temp = fila->inicio;

    Jogador j = temp->jogador;

    fila->inicio = temp->prox;

    if(fila->inicio == NULL)
        fila->fim = NULL;

    free(temp);

    return j;
}

// -------- VER INÍCIO --------

Jogador verInicio(Fila *fila) {

    Jogador erro;
    erro.id = -1;
    strcpy(erro.nickname, "");

    if(estaVazia(fila))
        return erro;

    return fila->inicio->jogador;
}

// -------- MOSTRAR FILA --------

void mostrar(Fila *fila) {

    if(estaVazia(fila)) {

        printf("\nA fila de matchmaking esta vazia.\n");
        return;
    }

    printf("\n===== FILA DE MATCHMAKING =====\n");

    No *aux = fila->inicio;

    while(aux != NULL) {

        printf("ID: %d\n", aux->jogador.id);
        printf("Nickname: %s\n\n", aux->jogador.nickname);

        aux = aux->prox;
    }
}

// -------- LIBERAR FILA --------

void liberar_fila(Fila *fila) {

    No *aux = fila->inicio;

    while(aux != NULL) {

        No *temp = aux;
        aux = aux->prox;

        free(temp);
    }

    fila->inicio = NULL;
    fila->fim = NULL;
}
