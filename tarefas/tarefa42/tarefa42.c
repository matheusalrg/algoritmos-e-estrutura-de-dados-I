#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura de configuração
struct Configuracao {
    int resolucao_x;
    int resolucao_y;
    float volume_som;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Criando variável da configuração
    struct Configuracao config;

    // Ponteiro para o arquivo
    FILE *arquivo;

    // Abrindo arquivo no modo leitura
    arquivo = fopen("config.txt", "r");

    // Verificando se o arquivo foi aberto corretamente
    if (arquivo == NULL) {

        printf("Erro: Arquivo config.txt nao encontrado!\n");
        exit(1);
    }

    // Lendo os dados do arquivo
    fscanf(arquivo,
           "%d %d %f",
           &config.resolucao_x,
           &config.resolucao_y,
           &config.volume_som);

    // Exibindo configurações carregadas
    printf("Configuracoes carregadas:\n");
    printf("Resolucao: %dx%d\n",
           config.resolucao_x,
           config.resolucao_y);

    printf("Volume: %.1f\n",
           config.volume_som);

    // Fechando o arquivo
    fclose(arquivo);

    return 0;
}
