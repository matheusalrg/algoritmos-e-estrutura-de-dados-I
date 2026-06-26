#include <stdio.h>
#include "spellbook.h"

int main() {

    Spellbook *grimorio = create_spellbook();

    if (grimorio == NULL) {
        printf("Erro ao criar o grimorio!\n");
        return 1;
    }

    add_spell(grimorio, 1, "Bola de Fogo", 25);
    add_spell(grimorio, 2, "Raio de Gelo", 18);
    add_spell(grimorio, 3, "Tempestade Arcana", 40);

    display_spellbook(grimorio);

    destroy_spellbook(grimorio);

    return 0;
}
