#include <stdio.h>

int main() {
    // Vetor fase com 10 posições
    int fase[10] = {0, 1, 0, 0, 1, 1, 0, 1, 0, 0};

    // Ponteiro do tipo inteiro chamado ponteiro_jogador
    int *ponteiro_jogador;

    // Variável do tipo inteiro moedas_coletadas
    int moedas_coletadas = 0;

    // Conecta o ponteiro ao vetor fase
    ponteiro_jogador = fase;

    // Percorrendo a fase com um laço de repetição
    for (int i = 0; i < 10; i++) {

        // Verifica o valor usando aritmética de ponteiros
        if (*(ponteiro_jogador + i) == 1) {

            // Incrementa moedas coletadas
            moedas_coletadas++; 
        }
    }

    // Imprime o resultado para o usuário
    printf("O jogador coletou um total de %d moedas!", moedas_coletadas);

    return 0;
}
