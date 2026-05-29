#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura do inimigo
typedef struct {
    char nome[50];
    int vida;
    int ataque;
} Inimigo;

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variável para armazenar inimigo atual
    Inimigo inimigo_atual;

    // Variável para armazenar inimigo mais forte
    Inimigo maior_ameaca;

    // Ponteiro para o arquivo
    FILE *arquivo;

    // Abrindo arquivo no modo leitura
    arquivo = fopen("wave_data.txt", "r");

    // Verificando se o arquivo foi aberto corretamente
    if (arquivo == NULL) {

        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    // Lendo primeiro inimigo do arquivo
    fscanf(arquivo,
           "%s %d %d",
           maior_ameaca.nome,
           &maior_ameaca.vida,
           &maior_ameaca.ataque);

    // Lendo todos os inimigos do arquivo
    while (fscanf(arquivo,
                  "%s %d %d",
                  inimigo_atual.nome,
                  &inimigo_atual.vida,
                  &inimigo_atual.ataque) != EOF) {

        // Verificando qual inimigo possui maior ataque
        if (inimigo_atual.ataque > maior_ameaca.ataque) {

            maior_ameaca = inimigo_atual;
        }
    }

    // Exibindo maior ameaça encontrada
    printf("Maior Ameaca: %s, Vida: %d, Ataque: %d\n",
           maior_ameaca.nome,
           maior_ameaca.vida,
           maior_ameaca.ataque);

    // Fechando o arquivo
    fclose(arquivo);

    return 0;
}
