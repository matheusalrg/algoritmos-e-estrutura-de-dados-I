#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Vetor do tipo inteiro chamado moedas_coletadas com 5 números distintos
    int moedas_coletadas[5] = {10, 50, 20, 5, 100};

    // Variável do tipo inteiro chamada pontuação total
    int pontuacao_total = 0;

    // Ponteiro do tipo inteiro chamado ponteiro_moeda
    int *ponteiro_moeda;

    // Ponteiro apontando para o vetor moedas_coletadas
    ponteiro_moeda = moedas_coletadas;

    // Laço de repetição para percorrer o vetor
    for (int i = 0; i < 5; i++) {

        // Verifica o valor da moeda atual e soma à pontuação total
        if (*ponteiro_moeda > 0) {
            pontuacao_total += *ponteiro_moeda;
        }

        // Incrementar ponteiro
        ponteiro_moeda++;
    }

    // Mensagem final mostrada ao usuário do total do nível
    printf("Pontuação total do nível: %d", pontuacao_total);

    return 0;
}
