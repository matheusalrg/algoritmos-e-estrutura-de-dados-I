#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura do campeão
typedef struct {
    char nome[50];
    int vida;
    int ataque;
} Campeao;

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Vetor de campeões (3 fixos conforme enunciado)
    Campeao time[3];

    // Ponteiro para o arquivo binário
    FILE *arquivo;

    // Variável para armazenar o índice do campeão com maior HP
    int i, indiceTanque = 0;

    // Abrindo arquivo no modo leitura binária
    arquivo = fopen("squad.dat", "rb");

    // Verificando se o arquivo abriu corretamente
    if (arquivo == NULL) {

        printf("Erro ao abrir o arquivo squad.dat!\n");
        return 1;
    }

    // Lendo os 3 campeões do arquivo em uma única operação
    fread(time, sizeof(Campeao), 3, arquivo);

    // Fechando o arquivo
    fclose(arquivo);

    // Percorrendo o vetor para encontrar o campeão com maior vida
    for (i = 1; i < 3; i++) {

        // Verificando quem tem mais HP
        if (time[i].vida > time[indiceTanque].vida) {

            indiceTanque = i;
        }
    }

    // Exibindo o tanque do esquadrão
    printf("%s: Tanque do esquadrão.\n", time[indiceTanque].nome);

    return 0;
}
