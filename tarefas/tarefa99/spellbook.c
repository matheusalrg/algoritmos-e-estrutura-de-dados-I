#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "spellbook.h"

// Criar grimório

Spellbook* create_spellbook() {

    Spellbook *book = (Spellbook *)malloc(sizeof(Spellbook));

    if(book == NULL) {
        return NULL;
    }

    book->head = NULL;

    return book;
}

// Adicionar feitiço

void add_spell(Spellbook *book, int id, const char *name, int mana_cost) {

    Node *novo = (Node *)malloc(sizeof(Node));

    if(novo == NULL) {
        printf("Erro de alocacao!\n");
        return;
    }

    novo->spell.id = id;
    strcpy(novo->spell.name, name);
    novo->spell.mana_cost = mana_cost;
    novo->next = NULL;

    if(book->head == NULL) {

        book->head = novo;

    } else {

        Node *aux = book->head;

        while(aux->next != NULL)
            aux = aux->next;

        aux->next = novo;
    }
}

// Mostrar grimório

void display_spellbook(Spellbook *book) {

    if(book->head == NULL) {

        printf("Grimorio vazio!\n");
        return;
    }

    Node *aux = book->head;

    printf("\n===== GRIMORIO =====\n");

    while(aux != NULL) {

        printf("ID: %d, Feitico: %s, Custo de Mana: %d\n",
               aux->spell.id,
               aux->spell.name,
               aux->spell.mana_cost);

        aux = aux->next;
    }
}

// Liberar memória

void destroy_spellbook(Spellbook *book) {

    Node *aux = book->head;

    while(aux != NULL) {

        Node *temp = aux;

        aux = aux->next;

        free(temp);
    }

    free(book);
}