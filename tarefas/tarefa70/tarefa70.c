#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função recursiva (Divisão e Conquista) para encontrar o maior elemento
int maiorFragmento(int v[], int inicio, int fim) {

    // Caso base: apenas um elemento
    if (inicio == fim) {
        return v[inicio];
    }

    int meio = (inicio + fim) / 2;

    // Conquista: metade esquerda
    int maxEsquerda = maiorFragmento(v, inicio, meio);

    // Conquista: metade direita
    int maxDireita = maiorFragmento(v, meio + 1, fim);

    // Combinação: retorna o maior dos dois
    if (maxEsquerda > maxDireita) {
        return maxEsquerda;
    } else {
        return maxDireita;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Número de fragmentos
    int n;

    // Ponteiro para vetor de fragmentos
    int *fragmentos;

    // Variáveis auxiliares
    int i;

    // Lendo quantidade de fragmentos
    printf("Digite a quantidade de fragmentos: ");
    scanf("%d", &n);

    // Alocando vetor dinamicamente
    fragmentos = (int *) malloc(n * sizeof(int));

    // Verificando erro de alocação
    if (fragmentos == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo valores dos fragmentos
    for (i = 0; i < n; i++) {
        scanf("%d", &fragmentos[i]);
    }

    // Chamando função recursiva (0 até n-1)
    int resultado = maiorFragmento(fragmentos, 0, n - 1);

    // Exibindo maior fragmento
    printf("Maior fragmento: %d\n", resultado);

    // Liberando memória
    free(fragmentos);

    return 0;
}
