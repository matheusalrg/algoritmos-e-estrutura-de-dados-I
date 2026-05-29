#include <stdio.h>
#include <locale.h>

// Função recursiva para calcular o dano do Ataque em Cascata
int danoCascata(int nivel) {

    // Caso base: nível 1
    if (nivel == 1) {
        return 10;
    }

    // Passo recursivo: cada nível adiciona mais poder ao anterior
    return 10 * nivel + danoCascata(nivel - 1);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Nível do mago
    int nivel;

    // Lendo o nível do mago
    printf("Digite o nível do mago: ");
    scanf("%d", &nivel);

    // Calculando o dano total usando recursão
    int danoTotal = danoCascata(nivel);

    // Exibindo o resultado
    printf("Dano total do Ataque em Cascata: %d\n", danoTotal);

    return 0;
}
