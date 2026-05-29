#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função de partição in-place (tipo Lomuto adaptado)
void particao(int n, int v[]) {

    int pivo = v[n - 1];
    int i = -1;
    int j, temp;

    // Percorrendo o vetor (sem incluir o pivô)
    for (j = 0; j < n - 1; j++) {

        // Se for menor que o pivô, vai para a esquerda
        if (v[j] < pivo) {
            i++;
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }

    // Colocando o pivô na posição correta
    temp = v[i + 1];
    v[i + 1] = v[n - 1];
    v[n - 1] = temp;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Número de mechas
    int n;

    // Vetor de HP
    int *v;

    // Variável auxiliar
    int i;

    // Lendo quantidade de mechas
    printf("Digite a quantidade de mechas: ");
    scanf("%d", &n);

    // Alocando vetor
    v = (int *) malloc(n * sizeof(int));

    if (v == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo HPs
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    // Particionando o vetor
    particao(n, v);

    // Exibindo resultado
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");

    free(v);

    return 0;
}
