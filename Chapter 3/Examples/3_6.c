#include <stdio.h>
#include <stdlib.h>

/*
 *  PPROGRAMA 3.6 PÁG. 85 - CRIVO DE ERATÓSTENES + ALOCAÇÃO DINÂMICA DE MEMÓRIA
 * 
 *  Este programa define uma implementação do crivo de Eratóstenes mas sem os arrays de antes.
 *  Ao invés disso, ele define o tamanho dinamicamente a partir da função malloc() que aloca
 *  um tamanho s de espaços de memória em um ponteiro a.
 */

int main(int argc, char **argv){
    long int s = atoi(argv[1]);
    int *a = malloc(s * sizeof(int));
    if(a == NULL){
        printf("fudeu cuzao");
        return 0;
    }

    for(int i = 2; i < s; i++){
        a[i] = 1;
    }
    for(int i = 2; i < s; i++){
        if(a[i]){
            for(int j = i; j * i < s; j++){
                a[i*j] = 0;
            }
        }
    }
    for(int i = 2; i < s; i++){
        if(a[i]) printf("%4d\n", i);
    }
    return 0;
}