#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura da conquista
struct Conquista {
    int id;
    int pontos;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variável para quantidade de conquistas
    int n;

    // Variável para total de experiência
    int total_xp = 0;

    // Estrutura para armazenar conquista atual
    struct Conquista conquista;

    // Ponteiro para o arquivo
    FILE *arquivo;

    // Abrindo arquivo no modo leitura e escrita
    arquivo = fopen("player_log.txt", "r+");

    // Verificando se o arquivo abriu corretamente
    if (arquivo == NULL) {

        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    // Lendo quantidade de conquistas
    fscanf(arquivo, "%d", &n);

    // Lendo todas as conquistas
    for (int i = 0; i < n; i++) {

        fscanf(arquivo,
               "%d %d",
               &conquista.id,
               &conquista.pontos);

        // Somando pontos de experiência
        total_xp += conquista.pontos;
    }

    // Exibindo total de experiência
    printf("Total de XP da sessao: %d\n", total_xp);

    // Movendo ponteiro para o final do arquivo
    fseek(arquivo, 0, SEEK_END);

    // Escrevendo mensagem final no arquivo
    fprintf(arquivo, "\n--- SESSION CONCLUDED ---");

    // Fechando arquivo
    fclose(arquivo);

    return 0;
}
