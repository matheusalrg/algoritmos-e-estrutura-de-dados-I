#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// --- ESTRUTURAS ---
typedef struct {
    int id;
    char descricao[100];
} Etapa;

typedef struct No {
    Etapa etapa;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
} Lista;

// --- PROTÓTIPOS ---
void menu();
void inserir_fim(Lista *lista, Etapa e);
void mostrar(Lista lista);
void deletar_antes(Lista *lista, int id_ref);

// --- FUNÇÃO PRINCIPAL ---
int main() {
    Lista lista;
    lista.inicio = NULL;
    int op, id_ref;
    Etapa e;

    do {
        menu();
        scanf("%d", &op);
        getchar();

        switch(op) {

            case 1:
                printf("\nDigite o ID da etapa: ");
                scanf("%d", &e.id);
                getchar();

                printf("Digite a descricao da etapa: ");
                fgets(e.descricao, sizeof(e.descricao), stdin);
                e.descricao[strcspn(e.descricao, "\n")] = '\0';

                inserir_fim(&lista, e);
                break;

            case 2:
                mostrar(lista);
                break;

            case 3:
                printf("\nInforme o ID da etapa de referencia: ");
                scanf("%d", &id_ref);
                deletar_antes(&lista, id_ref);
                break;

            case 4:
                printf("\nFinalizando o programa...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while(op != 4);

    // Libera a memória
    No *atual = lista.inicio;
    while (atual != NULL) {
        No *temp = atual;
        atual = atual->prox;
        free(temp);
    }

    return 0;
}

// ---------------- MENU ----------------

void menu() {
    printf("\n========== GERENCIADOR DE MISSAO ==========\n");
    printf("1 - Inserir etapa no fim\n");
    printf("2 - Mostrar etapas\n");
    printf("3 - Deletar etapa ANTES de um ID\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao: ");
}

// ------------ INSERIR NO FIM ------------

void inserir_fim(Lista *lista, Etapa e) {

    No *novo = (No *)malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro de alocacao de memoria!\n");
        return;
    }

    novo->etapa = e;
    novo->prox = NULL;

    if (lista->inicio == NULL) {
        lista->inicio = novo;
    } else {

        No *aux = lista->inicio;

        while (aux->prox != NULL) {
            aux = aux->prox;
        }

        aux->prox = novo;
    }

    printf("Etapa inserida com sucesso!\n");
}

// ------------ MOSTRAR LISTA ------------

void mostrar(Lista lista) {

    if (lista.inicio == NULL) {
        printf("\nNenhuma etapa cadastrada.\n");
        return;
    }

    printf("\n===== ETAPAS DA MISSAO =====\n");

    No *aux = lista.inicio;

    while (aux != NULL) {

        printf("ID: %d\n", aux->etapa.id);
        printf("Descricao: %s\n\n", aux->etapa.descricao);

        aux = aux->prox;
    }
}

// -------- DELETAR ANTES DE UM ID --------

void deletar_antes(Lista *lista, int id_ref) {

    // Caso 1: lista vazia
    if (lista->inicio == NULL) {
        printf("\nA lista esta vazia!\n");
        return;
    }

    // Caso 2: referência é o primeiro nó
    if (lista->inicio->etapa.id == id_ref) {
        printf("\nNao existe etapa antes da primeira.\n");
        return;
    }

    No *anterior = NULL;
    No *atual = lista->inicio;
    No *referencia = lista->inicio->prox;

    // Procura o ID de referência
    while (referencia != NULL && referencia->etapa.id != id_ref) {
        anterior = atual;
        atual = referencia;
        referencia = referencia->prox;
    }

    // Caso 5: ID não encontrado
    if (referencia == NULL) {
        printf("\nEtapa de referencia nao encontrada.\n");
        return;
    }

    // Caso 3: remover o primeiro nó
    if (anterior == NULL) {
        lista->inicio = referencia;
    }
    // Caso 4: remover um nó do meio
    else {
        anterior->prox = referencia;
    }

    printf("\nEtapa removida com sucesso!\n");
    printf("ID: %d\n", atual->etapa.id);
    printf("Descricao: %s\n", atual->etapa.descricao);

    free(atual);
}
