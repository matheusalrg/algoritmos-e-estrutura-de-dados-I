#include <stdio.h>
#include <locale.h>

// Função recursiva para calcular o dano do Golpe Ecoante
int calcularDanoEco(int n) {

    // Caso base: primeiro golpe
    if (n == 1) {
        return 0;
    }

    // Caso base: segundo golpe
    if (n == 2) {
        return 1;
    }

    // Caso recursivo: soma dos dois anteriores
    return calcularDanoEco(n - 1) + calcularDanoEco(n - 2);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Número do golpe na sequência
    int n;

    // Lendo entrada do usuário
    printf("Digite o número do golpe na sequência: ");
    scanf("%d", &n);

    // Calculando o dano bônus
    int dano = calcularDanoEco(n);

    // Exibindo resultado
    printf("Dano bônus do Golpe Ecoante: %d\n", dano);

    return 0;
}
