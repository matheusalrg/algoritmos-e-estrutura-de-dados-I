#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função recursiva para contar cristais com carga positiva
int contarPositivos(int v[], int n, int i) {

    // Caso base: percorreu todo o vetor
    if (i == n) {
        return 0;
    }

    // Verifica se o cristal atual tem carga positiva
    if (v[i] > 0) {
        return 1 + contarPositivos(v, n, i + 1);
    }

    // Caso contrário, continua a recursão sem somar
    return contarPositivos(v, n, i + 1);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Número de cristais
    int n;

    // Ponteiro para o vetor de cristais
    int *cristais;

    // Variável de controle
    int i;

    // Lendo quantidade de cristais
    printf("Digite o número de cristais: ");
    scanf("%d", &n);

    // Alocando memória dinamicamente
    cristais = (int *) malloc(n * sizeof(int));

    // Verificando erro de alocação
    if (cristais == NULL) {

        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo níveis de carga dos cristais
    for (i = 0; i < n; i++) {

        printf("Digite a carga do cristal %d: ", i + 1);
        scanf("%d", &cristais[i]);
    }

    // Chamando função recursiva para contar positivos
    int resultado = contarPositivos(cristais, n, 0);

    // Exibindo resultado
    printf("Quantidade de cristais com carga positiva: %d\n", resultado);

    // Liberando memória
    free(cristais);

    return 0;
}
