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
void salvar_guild_arquivo(Lista lista);
void liberar_lista(Lista *lista);

// -------- FUNÇÃO PRINCIPAL --------

int main() {

    Lista lista;
    lista.inicio = NULL;

    int opcao;
    Membro m;

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

                salvar_guild_arquivo(lista);
                break;

            case 4:

                printf("\nEncerrando programa...\n");
                break;

            default:

                printf("\nOpcao invalida!\n");
        }

    } while(opcao != 4);

    liberar_lista(&lista);

    return 0;
}

// -------- MENU --------

void menu() {

    printf("\n========== GUILDA ==========\n");
    printf("1 - Adicionar membro\n");
    printf("2 - Mostrar membros\n");
    printf("3 - Salvar guilda em arquivo\n");
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

// -------- SALVAR EM ARQUIVO BINÁRIO --------

void salvar_guild_arquivo(Lista lista) {

    FILE *arquivo = fopen("guild_roster.bin", "wb");

    if(arquivo == NULL) {

        printf("\nErro ao criar o arquivo!\n");
        return;
    }

    No *aux = lista.inicio;

    while(aux != NULL) {

        fwrite(&aux->membro, sizeof(Membro), 1, arquivo);

        aux = aux->prox;
    }

    fclose(arquivo);

    printf("\nGuilda salva com sucesso em 'guild_roster.bin'!\n");
}

// -------- LIBERAR LISTA --------

void liberar_lista(Lista *lista) {

    No *aux = lista->inicio;

    while(aux != NULL) {

        No *temp = aux;
        aux = aux->prox;

        free(temp);
    }

    lista->inicio = NULL;
}
