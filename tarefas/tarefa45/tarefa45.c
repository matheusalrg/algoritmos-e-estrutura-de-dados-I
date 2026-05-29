#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura do personagem
struct Personagem {
    char nome[50];
    int nivel;
    float vida;
    float mana;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variável da opção do menu
    int opcao;

    // Estrutura do personagem
    struct Personagem personagem;

    // Ponteiro para o arquivo
    FILE *arquivo;

    // Laço principal do programa
    do {

        // Exibindo menu
        printf("\n=== SISTEMA DE RPG ===\n");
        printf("1 - Criar Novo Personagem\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Verificando opção escolhida
        if (opcao == 1) {

            // Lendo dados do personagem
            printf("\nDigite o nome do personagem: ");
            scanf("%s", personagem.nome);

            printf("Digite o nivel: ");
            scanf("%d", &personagem.nivel);

            printf("Digite a vida: ");
            scanf("%f", &personagem.vida);

            printf("Digite a mana: ");
            scanf("%f", &personagem.mana);

            // Abrindo arquivo no modo escrita binária
            arquivo = fopen("savegame.sav", "wb");

            // Verificando se o arquivo abriu corretamente
            if (arquivo == NULL) {

                printf("Erro ao abrir o arquivo!\n");
                return 1;
            }

            // Gravando estrutura no arquivo binário
            fwrite(&personagem,
                   sizeof(struct Personagem),
                   1,
                   arquivo);

            // Fechando arquivo
            fclose(arquivo);

            printf("\nPersonagem salvo com sucesso!\n");
        }

        // Verificando opção de saída
        else if (opcao == 2) {

            printf("\nEncerrando programa...\n");
        }

        // Tratando opção inválida
        else {

            printf("\nOpcao invalida!\n");
        }

    } while (opcao != 2);

    return 0;
}
