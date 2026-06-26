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
int vazia(Pilha *pilha);
void push(Pilha *pilha, Feitico f);
Feitico pop(Pilha *pilha);
Feitico top(Pilha *pilha);
void mostrar_pilha(Pilha *pilha);
void inverter_pilha(Pilha *pilha);
void salvar_pilha_em_arquivo(Pilha *pilha, const char *nome_arquivo);
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

                f = pop(&pilha);

                if(f.custo_mana != -1)
                    printf("\nFeitico '%s' lancado com sucesso!\n", f.nome);

                break;

            case 3:

                mostrar_pilha(&pilha);
                break;

            case 4:

                f = top(&pilha);

                if(f.custo_mana != -1) {

                    printf("\n===== PROXIMO FEITICO =====\n");
                    printf("Nome: %s\n", f.nome);
                    printf("Custo de Mana: %d\n", f.custo_mana);
                }

                break;

            case 5:

                salvar_pilha_em_arquivo(&pilha, "grimorio.bin");
                break;

            case 6:

                if(vazia(&pilha))
                    printf("\nA pilha de comandos esta vazia.\n");
                else
                    printf("\nA pilha de comandos possui feiticos pendentes.\n");

                break;

            case 7:

                if(vazia(&pilha))
                    printf("\nNao ha nada para inverter.\n");
                else {

                    inverter_pilha(&pilha);
                    printf("\nOrdem dos feiticos invertida!\n");
                }

                break;

            case 8:

                printf("\nEncerrando programa...\n");
                break;

            default:

                printf("\nOpcao invalida!\n");
        }

    } while(opcao != 8);

    liberar_pilha(&pilha);

    return 0;
}

// -------- MENU --------

void menu() {

    printf("\n===== PILHA DE COMANDOS DO ARCANISTA =====\n");
    printf("1 - Adicionar feitico\n");
    printf("2 - Lancar proximo feitico\n");
    printf("3 - Mostrar pilha\n");
    printf("4 - Consultar proximo feitico\n");
    printf("5 - Salvar sequencia no grimorio\n");
    printf("6 - Verificar status da pilha\n");
    printf("7 - Inverter ordem dos feiticos\n");
    printf("8 - Sair\n");
    printf("Escolha: ");
}

// -------- INICIALIZAR --------

void inicializar(Pilha *pilha) {

    pilha->topo = NULL;
}

// -------- VERIFICAR PILHA --------

int vazia(Pilha *pilha) {

    return pilha->topo == NULL;
}

// -------- PUSH --------

void push(Pilha *pilha, Feitico f) {

    No *novo = (No *)malloc(sizeof(No));

    if(novo == NULL) {

        printf("Erro de alocacao!\n");
        return;
    }

    novo->feitico = f;
    novo->prox = pilha->topo;

    pilha->topo = novo;
}

// -------- POP --------

Feitico pop(Pilha *pilha) {

    Feitico erro;

    strcpy(erro.nome, "");
    erro.custo_mana = -1;

    if(vazia(pilha)) {

        printf("\nA pilha de comandos esta vazia!\n");
        return erro;
    }

    No *temp = pilha->topo;

    Feitico f = temp->feitico;

    pilha->topo = temp->prox;

    free(temp);

    return f;
}

// -------- TOP --------

Feitico top(Pilha *pilha) {

    Feitico erro;

    strcpy(erro.nome, "");
    erro.custo_mana = -1;

    if(vazia(pilha)) {

        printf("\nA pilha de comandos esta vazia!\n");
        return erro;
    }

    return pilha->topo->feitico;
}

// -------- MOSTRAR PILHA --------

void mostrar_pilha(Pilha *pilha) {

    if(vazia(pilha)) {

        printf("\nA pilha de comandos esta vazia!\n");
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

// -------- INVERTER PILHA --------

void inverter_pilha(Pilha *pilha) {

    Pilha auxiliar;
    inicializar(&auxiliar);

    while(!vazia(pilha)) {

        Feitico f = pop(pilha);
        push(&auxiliar, f);
    }

    pilha->topo = auxiliar.topo;
}

// -------- SALVAR EM ARQUIVO --------

void salvar_pilha_em_arquivo(Pilha *pilha, const char *nome_arquivo) {

    FILE *arquivo = fopen(nome_arquivo, "wb");

    if(arquivo == NULL) {

        printf("\nErro ao abrir o arquivo!\n");
        return;
    }

    No *aux = pilha->topo;

    while(aux != NULL) {

        fwrite(&aux->feitico, sizeof(Feitico), 1, arquivo);
        aux = aux->prox;
    }

    fclose(arquivo);

    printf("\nSequencia de comandos salva com sucesso em '%s'!\n", nome_arquivo);
}

// -------- LIBERAR PILHA --------

void liberar_pilha(Pilha *pilha) {

    while(!vazia(pilha)) {

        pop(pilha);
    }
}
