#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Energia inicial do Golem
    int n;

    // Lendo a energia inicial
    printf("Digite a energia inicial do Golem: ");
    scanf("%d", &n);

    // Laço logarítmico (O(log n))
    while (n > 1) {

        // Imprimindo energia atual
        printf("%d\n", n);

        // Reduzindo a energia pela metade
        n = n / 2;
    }

    return 0;
}
