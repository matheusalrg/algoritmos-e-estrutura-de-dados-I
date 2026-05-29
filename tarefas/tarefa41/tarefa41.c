#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variável da opção do menu
    int opcao;

    // Vetor para armazenar o evento
    char evento[100];

    // Ponteiro para o arquivo
    FILE *arquivo;

    // Laço principal do programa
    do {

        // Exibindo menu
        printf("\n=== SISTEMA DE EVENTOS ===\n");
        printf("1 - Registrar novo evento\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Verificando opção escolhida
        if (opcao == 1) {

            // Abrindo arquivo no modo append
            arquivo = fopen("game_log.txt", "a");

            // Verificando se o arquivo abriu corretamente
            if (arquivo == NULL) {

                printf("Erro ao abrir o arquivo!\n");
                return 1;
            }

            // Lendo descrição do evento
            printf("\nDigite o evento: ");
            scanf("%s", evento);

            // Salvando evento no arquivo
            fprintf(arquivo, "%s\n", evento);

            // Forçando escrita imediata no arquivo
            fflush(arquivo);

            // Fechando o arquivo
            fclose(arquivo);

            printf("Evento registrado com sucesso!\n");
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
