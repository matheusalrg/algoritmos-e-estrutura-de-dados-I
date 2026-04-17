#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variáveis para armazenar as dimensões do mapa
    int linhas, colunas;

    // Variável para contar os blocos de tijolo
    int contagem_tijolos = 0;

    // Ponteiro para ponteiro para representar a matriz dinâmica
    int **mapa;

    // Entrada das dimensões do mapa
    printf("Digite o número de linhas do mapa: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas do mapa: ");
    scanf("%d", &colunas);

    // Alocando memória para o vetor de ponteiros (linhas)
    mapa = (int **) malloc(linhas * sizeof(int *));

    // Verificando se a alocação do vetor de ponteiros foi bem-sucedida
    if (mapa == NULL) {
        printf("Erro ao alocar memória para o mapa.\n");
        return 1;
    }

    // Alocando memória para cada linha da matriz
    for (int i = 0; i < linhas; i++) {
        mapa[i] = (int *) malloc(colunas * sizeof(int));

        // Verificando se a alocação de cada linha foi bem-sucedida
        if (mapa[i] == NULL) {
            printf("Erro ao alocar memória para a linha %d do mapa.\n", i);

            // Liberando as linhas já alocadas antes de encerrar
            for (int j = 0; j < i; j++) {
                free(mapa[j]);
            }
            free(mapa);

            return 1;
        }
    }

    // Preenchendo o mapa com os valores digitados pelo usuário
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o valor da posição [%d][%d] (0, 1 ou 2): ", i, j);
            scanf("%d", &mapa[i][j]);
        }
    }

    // Contando quantos blocos de tijolo existem no mapa
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (mapa[i][j] == 1) {
                contagem_tijolos++;
            }
        }
    }

    // Exibindo o resultado final
    printf("O mapa possui %d blocos de tijolo.\n", contagem_tijolos);

    // Liberando a memória de cada linha da matriz
    for (int i = 0; i < linhas; i++) {
        free(mapa[i]);
    }

    // Liberando o vetor de ponteiros
    free(mapa);

    return 0;
}
