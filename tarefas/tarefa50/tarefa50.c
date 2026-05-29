#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variáveis para armazenar os valores de entrada
    float forcaBase, bonusArma, bonusBuff;

    // Variável para armazenar o dano total
    float danoTotal;

    // Lendo a força base do personagem
    printf("Digite a força base do personagem: ");
    scanf("%f", &forcaBase);

    // Lendo o bônus de dano da arma
    printf("Digite o bônus de dano da arma: ");
    scanf("%f", &bonusArma);

    // Lendo o bônus do feitiço (buff)
    printf("Digite o bônus do feitiço: ");
    scanf("%f", &bonusBuff);

    // Calculando o dano total (tempo constante O(1))
    danoTotal = forcaBase + bonusArma + bonusBuff;

    // Exibindo o resultado com duas casas decimais
    printf("Dano total: %.2f\n", danoTotal);

    return 0;
}
