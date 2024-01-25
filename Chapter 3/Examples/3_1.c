#include <stdio.h>

/*
 *  PROGRAMA 3.1 PÁG.73 - DECLARAÇÃO DE FUNÇÃO
 * 
 *  Este programa tem o único objetivo de demonstrar a declaração e o uso de uma função
 *  em C a partir da escrita de uma função que calcula lg(n) 
 */

int lg(int n);

int main(){
    int i, N;
    for(i = 1, N = 10; i <= 6; i++, N *= 10)
        printf("%7d %2d %9d\n", N, lg(N), N*lg(N));
    return 0;
}

int lg(int n){
    int i;
    for(i = 0; n > 0; i++, n /= 2) ;
    return i;
}