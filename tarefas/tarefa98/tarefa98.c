#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// -------- ESTRUTURAS --------

typedef struct {
    int id;
    char nome[100];
    int nivel;
} Membro;

typedef struct No {
    Membro membro;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
} Lista;

// -------- PROTÓTIPOS --------

void inserir_fim(Lista *lista, Membro m);
void mostrar_guilda(Lista lista);
Lista carregar_guilda();
void salvar_guilda_teste();
void liberar_lista(Lista *lista);

// -------- FUNÇÃO PRINCIPAL --------

int main() {

    // Cria um arquivo de teste
    salvar_guilda_teste();

    // Carrega os dados do arquivo
    Lista guilda = carregar_guilda();

    // Mostra os membros carregados
    mostrar_guilda(guilda);

    // Libera memória
    liberar_lista(&guilda);

    return 0;
}

// -------- INSERIR NO FIM --------

void inserir_fim(Lista *lista, Membro m) {

    No *novo = (No *)malloc(sizeof(No));

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
}

// -------- MOSTRAR GUILDA --------

void mostrar_guilda(Lista lista) {

    if(lista.inicio == NULL) {

        printf("\nNenhum membro carregado.\n");
        return;
    }

    printf("\n===== GUILDA CARREGADA =====\n");

    No *aux = lista.inicio;

    while(aux != NULL) {

        printf("ID: %d\n", aux->membro.id);
        printf("Nome: %s\n", aux->membro.nome);
        printf("Nivel: %d\n\n", aux->membro.nivel);

        aux = aux->prox;
    }
}

// -------- CARREGAR GUILDA --------

Lista carregar_guilda() {

    Lista lista;
    lista.inicio = NULL;

    FILE *arquivo = fopen("guild_roster.b", "rb");

    if(arquivo == NULL) {

        printf("Erro ao abrir o arquivo!\n");
        return lista;
    }

    Membro m;

    while(fread(&m, sizeof(Membro), 1, arquivo) == 1) {

        inserir_fim(&lista, m);
    }

    fclose(arquivo);

    return lista;
}

// -------- SALVAR GUILDA DE TESTE --------

void salvar_guilda_teste() {

    FILE *arquivo = fopen("guild_roster.b", "wb");

    if(arquivo == NULL) {

        printf("Erro ao criar arquivo!\n");
        return;
    }

    Membro membros[3] = {
        {1, "Arthur", 20},
        {2, "Luna", 35},
        {3, "Drake", 50}
    };

    for(int i = 0; i < 3; i++) {

        fwrite(&membros[i], sizeof(Membro), 1, arquivo);
    }

    fclose(arquivo);
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
