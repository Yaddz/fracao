#include <stdio.h>
#include <stdlib.h>

#include "fracao.h"

int mdc(int A, int B)
{
    int Menor;
    int M = 1;
    A = abs(A);
    B = abs(B);

    if (A > B){
        Menor = B;
    }
    else{
        Menor = A;
    }

    for (int i = 1; i < Menor; i++){
        if (A % i == 0 && B % i == 0){
            M = i;
        } 
    }
    return M;
    
    /*  Forma mais eficiente :)
    while(B != 0){
        int temp = bB;
        B = A % B;
        A = temp;
    }

    return A; 
    */
}

fracao criarfracao(int A, int B)
{
    fracao X;
    X.Num = A;
    X.Den = B;

    return X;
}

fracao simplificarfracao(fracao F)
{
    int temp = mdc(F.Num, F.Den);
    F. Num = F.Num / temp;
    F. Den = F.Den / temp;

    return F;
}

fracao somarfracao(fracao F, fracao G)
{
    fracao Resultado;
    Resultado.Num = F.Num * G.Den + G.Num * F.Den;
    Resultado.Den = F.Den * G.Den;
    Resultado = simplificarfracao(Resultado);

    return Resultado;
}

fracao subtrairfracao(fracao F, fracao G)
{
    fracao Resultado;
    G.Num = -G.Num;
    Resultado = somarfracao(F, G);

    return Resultado;
}

fracao multiplicarfracao(fracao F, fracao G)
{
  fracao Resultado;
  Resultado.Num = F.Num * G.Num;  
  Resultado.Den = F.Den * G.Den;
  Resultado = simplificarfracao(Resultado);  
}

fracao dividirfracao(fracao F, fracao G)
{

}

fracao inverterfracao(fracao F, fracao G)
{

}

void mostrarfracao(fracao F)
{
    printf("Fracao: %d/%d\n\n", F.Num, F.Den);
}
