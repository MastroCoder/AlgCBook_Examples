#include <stdlib.h>
#include <stdio.h>
/*
 *  PROGRAMA 3.9 PÁG. 94 - PROBLEMA DE JOSEPHUS
 *  
 *  O problema de Josephus é um problema clássico em que se considera um círculo de pessoas
 *  esperando a execução. Define-se um "step", isto é, quantas pessoas serão puladas a cada 
 *  rodada. Iniciando em um ponto qualquer do círculo, executa-se uma pessoa a cada "step"
 *  até que só reste uma, que será libertada.
 * 
 *  O intuito desse programa é, basicamente, criar uma eleição de Josephus com uma lista 
 *  encadeada baseando-se em 
 */

typedef struct no *link;
struct no { int item; link prox; };

int main(int argc, char **argv){
    int i, N = atoi(argv[1]), M = atoi(argv[2]);
    link t = malloc(sizeof *t), x = t;
    t->item = 1; t->prox=t;
    
    for(i = 2; i <= N; i++){
        x = (x->prox = malloc(sizeof *x));
        x->item = i; x->prox=t;
    }
    while(x != x->prox){
        for(i = 1; i < M; i++){
            x = x->prox;
        }
        x->prox = x->prox->prox;
        N--;
    }
    printf("%d\n", x->item);
    return 0;
}