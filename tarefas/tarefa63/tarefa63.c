#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Placar com 5 melhores tempos já ordenados (crescente)
    int placar[5] = {120, 125, 130, 142, 150};

    // Novo tempo a ser inserido
    int novo_tempo;

    // Variável de controle
    int i;

    // Lendo novo tempo
    printf("Digite o novo tempo: ");
    scanf("%d", &novo_tempo);

    // Verifica se o novo tempo é melhor que pelo menos algum do placar
    if (novo_tempo < placar[4]) {

        // Inserção mantendo ordem crescente (da direita para esquerda)
        for (i = 4; i > 0 && placar[i - 1] > novo_tempo; i--) {
            placar[i] = placar[i - 1];
        }

        // Inserindo o novo tempo na posição correta
        placar[i] = novo_tempo;
    }

    // Exibindo placar atualizado
    printf("\n=== PLACAR ATUALIZADO ===\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", placar[i]);
    }

    printf("\n");

    return 0;
}
