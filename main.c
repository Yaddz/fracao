#include <stdio.h>
#include <stdlib.h>

#include "fracao.h"

int main(){
    system("cls");

    // Crirar funções inicias para operações e resultado
    fracao Resultado;
    fracao F1 = criarfracao(5, 6);
    fracao G1 = criarfracao(4, 9);

    // Crirar função inicial
    printf("Fracao original:\n");
    fracao F = criarfracao(12, 20);
    mostrarfracao(F);
    
    printf("Simplificar fracao:\n"); // Teste - 01
    F = simplificarfracao(F);
    mostrarfracao(F);
    
    printf("Somar fracao:\n"); // Teste - 02
    Resultado = somarfracao(F1, G1);
    mostrarfracao(Resultado);
    
    printf("Subtrair fracao:\n"); // Teste - 03
    Resultado = subtrairfracao(F1, G1);
    mostrarfracao(Resultado);
    
    printf("Multiplicar fracao:\n"); // Teste - 04
    Resultado = multiplicarfracao(F1, G1);
    mostrarfracao(Resultado);
    
    printf("dividir fracao:\n"); // Teste - 05
    Resultado = dividirfracao(F1, G1);
    mostrarfracao(Resultado);
    
    printf("inverter fracao:\n"); // Teste - 06
    Resultado = inverterfracao(F1, G1);
    mostrarfracao(Resultado);

    return 0;
}