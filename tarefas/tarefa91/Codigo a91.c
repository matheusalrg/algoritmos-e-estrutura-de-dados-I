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
        getchar(); // Limpa o buffer do teclado (o '\n' deixado pelo scanf)

        switch(op) {
            case 1:
                printf("\nDigite o ID da etapa: ");
                scanf("%d", &e.id);
                getchar(); // Limpa o buffer para o fgets
                printf("Digite a descricao da etapa: ");
                fgets(e.descricao, 100, stdin);
                e.descricao[strcspn(e.descricao, "\n")] = 0; // Remove a nova linha do fgets
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

    // Liberar toda a memória alocada antes de sair (boa prática)
    No *atual = lista.inicio;
    while (atual != NULL) {
        No *temp = atual;
        atual = atual->prox;
        free(temp);
    }

    return 0;
}

// --- IMPLEMENTAÇÃO DAS FUNÇÕES AUXILIARES ---
void menu() {
    printf("\n--- Gerenciador de Etapas de Missao ---\n");
    printf("1 - Inserir etapa no fim\n");
    printf("2 - Mostrar etapas\n");
    printf("3 - Deletar etapa ANTES de um ID\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao: ");
}

void inserir_fim(Lista *lista, Etapa e) {
    No *novo = (No*) malloc(sizeof(No));
    if (!novo) {
        printf("Erro de alocacao de memoria!\n");
        return;
    }
    novo->etapa = e;
    novo->prox = NULL;

    if (lista->inicio == NULL) {
        lista->inicio = novo;
    } else {
        No *pi = lista->inicio;
        while (pi->prox != NULL) {
            pi = pi->prox;
        }
        pi->prox = novo;
    }
    printf("Etapa '%s' inserida com sucesso!\n", e.descricao);
}

void mostrar(Lista lista) {
    printf("\n--- Diário de Missao ---\n");
    if (lista.inicio == NULL) {
        printf("Nenhuma etapa registrada.\n");
        return;
    }
    No *pi = lista.inicio;
    while (pi != NULL) {
        printf("ID: %d - Descricao: %s\n", pi->etapa.id, pi->etapa.descricao);
        pi = pi->prox;
    }
    printf("------------------------\n");
}

void deletar_antes(Lista *lista, int id_ref) {
    // ====================================
    // COMECE A IMPLEMENTAR SEU CÓDIGO AQUI
    // ====================================
    //
    // Lembre-se de tratar todos os casos especiais:
    // 1. A lista está vazia.
    // 2. A etapa de referência é a primeira da lista (não há o que deletar).
    // 3. A etapa a ser deletada é a primeira da lista (a de referência é a segunda).
    // 4. A etapa a ser deletada está no meio da lista.
    // 5. A etapa de referência não existe.
    //
    // Dica: Para resolver este problema, você provavelmente precisará
    // de três ponteiros para percorrer a lista!
    
    printf("\nFuncao 'deletar_antes' ainda nao implementada.\n"); // Após implementação, remover essa linha.
}