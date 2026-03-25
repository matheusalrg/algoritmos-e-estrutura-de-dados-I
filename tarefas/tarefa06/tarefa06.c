#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    // Declaração de um vetor com 5 valores distintos
    int plataformas[5] = {10, 20, 5, 15, 30};

    // Criação de um ponteiro do tipo inteiro
    int *ponteiro_plataforma;

    // Variável do tipo inteiro chamada altura_total
    int altura_total = 0;

    // Laço que percorre todas as posições do vetor
    for (int i = 0; i < 5; i++) {
        // Faz o ponteiro apontar para o i-ésimo elemento do vetor
        ponteiro_plataforma = plataformas + i;

        // Soma o valor apontado à altura total
        altura_total = altura_total + *ponteiro_plataforma;
    }
    // Mensagem final que será mostrada na tela do usuário
    printf("Altura total do salto: %d", altura_total);

    return 0;
}
