#include <stdio.h>

/*
 *  PROGRAMA 2.2 PÁG. 56 - BUSCA BINÁRIA
 * 
 *  Este programa apresenta um algoritmo de busca binária, usando o conceito de divisão
 *  e conquista. Em suma, usando um array ordenado, podemos verificar a entrada central
 *  e eliminar metade de nosso dataset a cada checagem.
 * 
 *  Se, considerando um dataset ordenado, uma busca sequencial tem uma média de N/2 
 *  operações, uma busca binária tem, no máximo, floor(lg N) + 1 operações.
 */

int binary_search(int a[], int v, int l, int r){
    int m = (l + r)/2;
    while(r >= l){
        if(a[m] == v) return m;
        if(a[m] > v) l = m + 1; else r = m - 1;
    }
    return -1;
}