#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    // Frase padrão do chefe
    char frase_inicio_luta[] = "Você nunca sairá daqui com vida!";

    // Caixa de diálogo (inicialmente em silêncio)
    char caixa_dialogo[100] = "(Silêncio)";

    // Estado inicial do chefe
    printf("Chefe antes da luta: %s\n", caixa_dialogo);

    // Copiar a frase para a caixa de diálogo
    strcpy(caixa_dialogo, frase_inicio_luta);

    // Mostra o diálogo para o usuário após a ativação
    printf("Chefe diz: %s\n", caixa_dialogo);

    return 0;
}
