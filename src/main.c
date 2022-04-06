#include <stdlib.h> 
#include <stdio.h>
#include "GerarMatriz.h"

int main(){
    int n =0;
    int Soma=0;

    printf("Digite o valor de N para a Matriz NxN:\n"); 
    scanf("%d", &n);

    int Mat[n][n];

    GerarMatriz(n, Mat);
    
    ImprimirMatriz(n, Mat);

    Soma = CaminhoMatriz(n, Mat);
    printf("Caminho realizado:\n");

    ImprimirMatriz(n, Mat);
    printf("A Soma dos valores percorrido na Matriz eh: %d", Soma);
    printf("\n");

    return 0;
}