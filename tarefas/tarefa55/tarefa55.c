#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura Jogador
typedef struct {
    int id;
    char nickname[50];
    int reputacao;
} Jogador;

// Função de busca binária por ID
int buscaBinaria(Jogador *v, int n, int id) {

    int i = 0;
    int f = n - 1;
    int meio;

    // Enquanto houver intervalo válido
    while (i <= f) {

        meio = (i + f) / 2;

        // Se encontrou o jogador
        if (v[meio].id == id) {
            return meio;
        }

        // Se o ID do meio for menor, busca na metade direita
        else if (v[meio].id < id) {
            i = meio + 1;
        }

        // Se o ID do meio for maior, busca na metade esquerda
        else {
            f = meio - 1;
        }
    }

    // Não encontrado
    return -1;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Número de jogadores
    int n;

    // Ponteiro para vetor de jogadores
    Jogador *jogadores;

    // Variáveis auxiliares
    int i, opcao, idBusca, indice;

    // Lendo quantidade de jogadores
    printf("Digite o número de jogadores: ");
    scanf("%d", &n);

    // Alocando memória dinamicamente
    jogadores = (Jogador *) malloc(n * sizeof(Jogador));

    // Verificando erro de alocação
    if (jogadores == NULL) {

        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo dados dos jogadores
    for (i = 0; i < n; i++) {

        printf("\n=== Jogador %d ===\n", i + 1);

        printf("Digite o ID: ");
        scanf("%d", &jogadores[i].id);

        printf("Digite o nickname: ");
        scanf("%s", jogadores[i].nickname);

        printf("Digite a reputação: ");
        scanf("%d", &jogadores[i].reputacao);
    }

    // Menu de operações
    do {

        printf("\n=== MENU GM ===\n");
        printf("1 - Adicionar Reputação\n");
        printf("2 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            // Lendo ID para busca
            printf("Digite o ID do jogador: ");
            scanf("%d", &idBusca);

            // Busca binária
            indice = buscaBinaria(jogadores, n, idBusca);

            // Verificando resultado
            if (indice != -1) {

                // Aumentando reputação
                jogadores[indice].reputacao += 100;

                // Exibindo resultado
                printf("Nickname: %s, Nova Reputacao: %d\n",
                       jogadores[indice].nickname,
                       jogadores[indice].reputacao);

            } else {

                printf("Jogador com ID %d nao encontrado.\n", idBusca);
            }
        }

        else if (opcao == 2) {

            printf("Encerrando programa...\n");
        }

        else {

            printf("Opção inválida!\n");
        }

    } while (opcao != 2);

    // Liberando memória
    free(jogadores);

    return 0;
}
