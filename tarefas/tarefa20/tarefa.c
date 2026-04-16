#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Ponteiro genérico para armazenar a duração do power-up
    void *ponteiro_duracao;

    // Alocando memória para um número inteiro
    ponteiro_duracao = malloc(sizeof(int));

    // Verificando se a alocação foi bem-sucedida
    if (ponteiro_duracao == NULL) {
        printf("Erro ao alocar memória para a duração do power-up.\n");
        return 1;
    }

    // Ativando o power-up com duração inicial de 10 segundos
    *((int *) ponteiro_duracao) = 10;
    printf("Power-up 'Super Salto' ativado! Duração: %d segundos.\n", *((int *) ponteiro_duracao));

    // Simulando a passagem do tempo
    *((int *) ponteiro_duracao) -= 3;
    printf("3 segundos se passaram... Duração restante: %d segundos.\n", *((int *) ponteiro_duracao));

    // Liberando a memória alocada
    free(ponteiro_duracao);

    return 0;
}
