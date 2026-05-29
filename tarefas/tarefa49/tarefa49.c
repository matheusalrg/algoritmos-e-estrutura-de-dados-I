#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Ponteiro para o arquivo de mapa
    FILE *arquivo;

    // Tentando abrir o arquivo de mapa
    arquivo = fopen("level_1_map.dat", "r");

    // Verificando se houve erro na abertura do arquivo
    if (arquivo == NULL) {

        // Mensagem de erro personalizada
        printf("ERRO CRITICO: Nao foi possivel carregar os dados do mapa.\n");

        // Exibindo detalhes do erro do sistema operacional
        perror("Detalhes do erro");

        // Encerrando o programa com código de erro
        exit(1);
    }

    // Se o arquivo abrir corretamente (caso exista no futuro)
    fclose(arquivo);

    return 0;
}
