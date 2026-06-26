#ifndef HEROI_H
#define HEROI_H

typedef struct heroi Heroi;

Heroi *criarHerois(int quantidade);
void lerHerois(Heroi *herois, int quantidade);
void imprimirHerois(Heroi *herois, int quantidade);

#endif
