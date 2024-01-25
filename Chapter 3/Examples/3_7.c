#include <stdio.h>
#include <stdlib.h>

/*
 *  PPROGRAMA 3.7 PÁG. 87 - EXPERIMENTO DE ARREMESSO DE MOEDAS
 * 
 *  Este programa define uma função para retornar 0 ou 1 aleatoriamente (com 1 significando
 *  cara) e assim implementa um ambiente onde o experimento é simulado M vezes arremessando
 *  uma moeda N vezes dentro do input ("o prorgama deve ser executado como ./prog N M")
 */

int heads(){
    return rand() < RAND_MAX / 2;  // retorna 0 ou 1 aleatoriamente
}

int main(int argc, char **argv){
    int count, j;
    int N = atoi(argv[1]); // número de vezes que a moeda será girada
    int M = atoi(argv[2]); // Número de vezes que o experimento ocorrerá

    int *v = malloc((N + 1)* sizeof(int)); 
    for(int i = 0; i <= N; i++) v[i] = 0;
    for(int i = 0; i < M; i++, v[count]++){
        for(j = 0, count = 0; j <= N; j++){
            if(heads()) count++;
        }
    }

    for(j = 0; j <= N; j++){
        printf("%2d ", j);
        for(int i = 0; i < v[j]; i += 10) printf("*");
        printf("\n");
    }
    return 0;
}