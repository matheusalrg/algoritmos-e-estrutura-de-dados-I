#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Número de jogadores
    int n;

    // Ponteiro para vetor de pontuações
    int *pontuacoes;

    // Variáveis auxiliares
    int i, j, temp;

    // Flag de controle (otimização do Bubble Sort)
    int trocou;

    // Lendo quantidade de jogadores
    printf("Digite o número de jogadores: ");
    scanf("%d", &n);

    // Alocando memória dinamicamente
    pontuacoes = (int *) malloc(n * sizeof(int));

    // Verificando falha na alocação
    if (pontuacoes == NULL) {

        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo as pontuações
    for (i = 0; i < n; i++) {
        scanf("%d", &pontuacoes[i]);
    }

    // Bubble Sort otimizado (ordem decrescente)
    for (i = 0; i < n - 1; i++) {

        trocou = 0;

        for (j = 0; j < n - i - 1; j++) {

            // Se estiver fora de ordem (decrescente)
            if (pontuacoes[j] < pontuacoes[j + 1]) {

                temp = pontuacoes[j];
                pontuacoes[j] = pontuacoes[j + 1];
                pontuacoes[j + 1] = temp;

                trocou = 1;
            }
        }

        // Se não houve troca, vetor já está ordenado
        if (trocou == 0) {
            break;
        }
    }

    // Exibindo resultado final
    for (i = 0; i < n; i++) {
        printf("%d ", pontuacoes[i]);
    }

    printf("\n");

    // Liberando memória
    free(pontuacoes);

    return 0;
}
