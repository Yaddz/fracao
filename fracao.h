#ifndef FRACAO_H
#define FRACAO_H

typedef struct
{
    int Num;
    int Den;
} fracao;

fracao criarfracao(int A, int B);
fracao simplificarfracao(fracao F);
fracao somarfracao(fracao F, fracao G);
fracao subtrairfracao(fracao F, fracao G);
fracao multiplicarfracao(fracao F, fracao G);
fracao dividirfracao(fracao F, fracao G);
fracao inverterfracao(fracao F, fracao G);
void mostrarfracao(fracao F);

#endif