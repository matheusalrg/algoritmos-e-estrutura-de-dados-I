#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    int id;
    char nome[100];
} Ward;

typedef struct No {
    Ward ward;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
} Lista;

// Inicializa a lista
void inicializar(Lista *lista) {
    lista->inicio = NULL;
}

// Adiciona um ward no final
void adicionarWard(Lista *lista, Ward w) {
    No *novo = (No *)malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro de alocacao de memoria!\n");
        return;
    }

    novo->ward = w;
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

    printf("Ward adicionado com sucesso!\n");
}

// Remove o nó após um ID
void deletarApos(Lista *lista, int idReferencia) {

    // Lista vazia
    if (lista->inicio == NULL) {
        printf("A lista de wards esta vazia!\n");
        return;
    }

    No *aux = lista->inicio;

    while (aux != NULL && aux->ward.id != idReferencia) {
        aux = aux->prox;
    }

    // ID não encontrado
    if (aux == NULL) {
        printf("Ward de referencia nao encontrado.\n");
        return;
    }

    // Último elemento
    if (aux->prox == NULL) {
        printf("O ward informado e o ultimo da lista. Nao existe ward apos ele.\n");
        return;
    }

    No *remover = aux->prox;

    aux->prox = remover->prox;

    printf("Ward removido:\n");
    printf("ID: %d\n", remover->ward.id);
    printf("Nome: %s\n", remover->ward.nome);

    free(remover);
}

// Mostra os wards
void mostrarWards(Lista *lista) {

    if (lista->inicio == NULL) {
        printf("Nenhum ward ativo.\n");
        return;
    }

    printf("\n===== WARDS ATIVOS =====\n");

    No *aux = lista->inicio;

    while (aux != NULL) {
        printf("ID: %d\n", aux->ward.id);
        printf("Nome: %s\n\n", aux->ward.nome);
        aux = aux->prox;
    }
}

// Libera memória
void liberarLista(Lista *lista) {
    No *aux;

    while (lista->inicio != NULL) {
        aux = lista->inicio;
        lista->inicio = lista->inicio->prox;
        free(aux);
    }
}

int main() {

    setlocale(LC_ALL, "");

    Lista lista;
    inicializar(&lista);

    Ward w;
    int opcao, idReferencia;

    do {

        printf("\n===== MENU =====\n");
        printf("1 - Adicionar Ward\n");
        printf("2 - Lancar 'Ward Shatter'\n");
        printf("3 - Mostrar Wards Ativos\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {

        case 1:

            printf("ID do Ward: ");
            scanf("%d", &w.id);
            getchar();

            printf("Nome do Ward: ");
            fgets(w.nome, sizeof(w.nome), stdin);
            w.nome[strcspn(w.nome, "\n")] = '\0';

            adicionarWard(&lista, w);

            break;

        case 2:

            printf("Digite o ID do Ward de referencia: ");
            scanf("%d", &idReferencia);

            deletarApos(&lista, idReferencia);

            break;

        case 3:

            mostrarWards(&lista);

            break;

        case 4:

            printf("Encerrando o programa...\n");

            break;

        default:

            printf("Opcao invalida!\n");
        }

    } while (opcao != 4);

    liberarLista(&lista);

    return 0;
}
