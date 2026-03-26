#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Vetores de moedas de cada sala
    int sala_1[3] = {10, 20, 5};
    int sala_2[2] = {50, 100};
    int sala_3[4] = {5, 5, 5, 10};

    // Vetor de ponteiros para inteiros
    int *ponteiro_salas[3];

    // Cada posição do vetor aponta para uma sala
    ponteiro_salas[0] = sala_1;
    ponteiro_salas[1] = sala_2;
    ponteiro_salas[2] = sala_3;

    // Imprime as moedas da Sala 1
    printf("Moedas na Sala 1: ");
    for (int i = 0; i < sizeof(sala_1) / sizeof(sala_1[0]); i++) {
        printf("%d ", ponteiro_salas[0][i]);
    }
    printf("\n");

    // Imprime as moedas da Sala 2
    printf("Moedas na Sala 2: ");
    for (int i = 0; i < sizeof(sala_2) / sizeof(sala_2[0]); i++) {
        printf("%d ", ponteiro_salas[1][i]);
    }
    printf("\n");

    // Imprime as moedas da Sala 3
    printf("Moedas na Sala 3: ");
    for (int i = 0; i < sizeof(sala_3) / sizeof(sala_3[0]); i++) {
        printf("%d ", ponteiro_salas[2][i]);
    }
    printf("\n");

    return 0;
}
