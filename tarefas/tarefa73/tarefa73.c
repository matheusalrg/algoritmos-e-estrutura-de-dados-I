#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função de partição usando vetor auxiliar
void particao(int n, int v[]) {

    int *s = (int *) malloc(n * sizeof(int));

    int i, inicio = 0, fim = n - 1;

    int pivô = v[n - 1];

    // Percorrendo o vetor original
    for (i = 0; i < n; i++) {

        if (v[i] <= pivô) {
            s[inicio++] = v[i];
        } else {
            s[fim--] = v[i];
        }
    }

    // Copiando de volta para o vetor original
    for (i = 0; i < n; i++) {
        v[i] = s[i];
    }

    free(s);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Número de itens
    int n;

    // Vetor de itens
    int *v;

    // Variáveis auxiliares
    int i;

    // Lendo quantidade de itens
    printf("Digite a quantidade de itens: ");
    scanf("%d", &n);

    // Alocando vetor principal
    v = (int *) malloc(n * sizeof(int));

    if (v == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo os valores
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    // Chamando função de partição
    particao(n, v);

    // Exibindo resultado
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");

    free(v);

    return 0;
}
