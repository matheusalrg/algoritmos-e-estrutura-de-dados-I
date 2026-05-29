#include <stdio.h>
#include <locale.h>

// Definição da estrutura do inimigo
struct Inimigo {
    char nome[50];
    float hp;
    float atk;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Criando vetor para armazenar os inimigos
    struct Inimigo inimigos[3];

    // Variável para armazenar o nível de ameaça
    float nivel_ameaca;

    // Ponteiro para o arquivo
    FILE *arquivo;

    // Abrindo o arquivo no modo leitura
    arquivo = fopen("inimigos.txt", "r");

    // Verificando se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    // Lendo os dados dos inimigos do arquivo
    for (int i = 0; i < 3; i++) {

        fscanf(arquivo, "%s %f %f",
               inimigos[i].nome,
               &inimigos[i].hp,
               &inimigos[i].atk);
    }

    // Exibindo apenas os inimigos elite
    printf("=== INIMIGOS ELITE ===\n\n");

    for (int i = 0; i < 3; i++) {

        // Calculando o nível de ameaça
        nivel_ameaca = inimigos[i].hp + inimigos[i].atk;

        // Verificando se o inimigo é elite
        if (nivel_ameaca >= 200) {

            printf("Nome: %s\n", inimigos[i].nome);
            printf("Nivel de Ameaca: %.1f\n\n", nivel_ameaca);
        }
    }

    // Fechando o arquivo
    fclose(arquivo);

    return 0;
}
