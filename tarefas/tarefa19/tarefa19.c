#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Ponteiro para armazenar a altura do salto duplo (inicialmente NULL)
    float *ponteiro_altura_salto_duplo = NULL;

    // Status inicial do jogador
    printf("Jogador ainda nao possui o Salto Duplo.\n");

    // Simulando a coleta da Pena Dourada (alocação de memória)
    ponteiro_altura_salto_duplo = (float *) malloc(sizeof(float));

    // Verificando se a alocação foi bem-sucedida
    if (ponteiro_altura_salto_duplo != NULL) {

        // Atribuindo valor à altura do salto duplo
        *ponteiro_altura_salto_duplo = 15.5;

        // Exibindo o novo status do jogador
        printf("Pena Dourada coletada! Altura do Salto Duplo: %.2f\n", *ponteiro_altura_salto_duplo);

        // Liberando a memória alocada
        // Em um jogo real, isso seria feito quando o power-up não fosse mais necessário
        free(ponteiro_altura_salto_duplo);
    }

    return 0;
}
