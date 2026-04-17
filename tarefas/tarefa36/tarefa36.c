#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura da moeda
struct Moeda {
    int posicao_x;
    int posicao_y;
    int valor;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variável para quantidade de moedas
    int quantidade;

    // Variável para soma total de pontos
    int total_pontos = 0;

    // Ponteiro para o vetor de moedas
    struct Moeda *moedas;

    // Entrada da quantidade de moedas
    printf("Digite a quantidade de moedas do nivel: ");
    scanf("%d", &quantidade);

    // Alocando memória dinamicamente
    moedas = (struct Moeda *) malloc(quantidade * sizeof(struct Moeda));

    // Verificando se a alocação foi bem-sucedida
    if (moedas == NULL) {
        printf("Erro ao alocar memoria para as moedas.\n");
        return 1;
    }

    // Cadastro das moedas
    for (int i = 0; i < quantidade; i++) {
        printf("Moeda %d:\n", i + 1);

        printf("Digite a posicao X: ");
        scanf("%d", &moedas[i].posicao_x);

        printf("Digite a posicao Y: ");
        scanf("%d", &moedas[i].posicao_y);

        printf("Digite o valor: ");
        scanf("%d", &moedas[i].valor);
    }

    // Calculando o total de pontos
    for (int i = 0; i < quantidade; i++) {
        total_pontos += moedas[i].valor;
    }

    // Exibindo o resultado final
    printf("Pontuacao maxima do nivel: %d\n", total_pontos);

    // Liberando a memória alocada
    free(moedas);

    // Boa prática: evitando ponteiro pendurado
    moedas = NULL;

    return 0;
}
