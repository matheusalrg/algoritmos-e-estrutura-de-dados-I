#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    // Variável tesouro
    int tesouro_local = 0;

    // Criação do ponteiro da plataforma
    int *plataforma_secreta;

    // Conectando o ponteiro ao endereço do tesouro local
    plataforma_secreta = &tesouro_local;

    // Mensagem da situação do tesouro(0 - Para não encontrado; 1 - Para encontrado)
    printf("O tesouro ainda não apareceu. Valor: %d\n", tesouro_local);

    // Chamando o ponteiro para acessar e alterar o valor da variável tesouro local para 1
    *plataforma_secreta = 1;

    // Mensagem da situação do tesouro(0 - Para não encontrado; 1 - Para encontrado)
    printf("O personagem pisou na plataforma secreta! O tesouro apareceu! Valor: %d\n", tesouro_local);

    return 0;
}
