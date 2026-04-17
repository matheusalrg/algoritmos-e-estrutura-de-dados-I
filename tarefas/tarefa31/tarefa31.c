#include <stdio.h>
#include <locale.h>

// Definição do tipo Coletavel usando typedef
typedef struct {
    int pontos;
    float pos_x;
    float pos_y;
} Coletavel;

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Declarando a variável do tipo Coletavel
    Coletavel gema_rara;

    // Entrada de dados do usuário
    printf("Digite o valor em pontos da gema: ");
    scanf("%d", &gema_rara.pontos);

    printf("Digite a posicao X da gema: ");
    scanf("%f", &gema_rara.pos_x);

    printf("Digite a posicao Y da gema: ");
    scanf("%f", &gema_rara.pos_y);

    // Exibindo os dados do item criado
    printf("Coletavel criado! Valor: %d pontos. Posicao: (X=%.2f, Y=%.2f)\n",
           gema_rara.pontos, gema_rara.pos_x, gema_rara.pos_y);

    return 0;
}
